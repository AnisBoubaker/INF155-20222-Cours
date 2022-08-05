#define _CRT_SECURE_NO_WARNINGS

#include "mod_province.h"


t_province* province_init(char* nom, int max_capteurs)
{
	t_province* nouv_province; 

	nouv_province = (t_province*)malloc(sizeof(t_province));
	if (!nouv_province)
	{
		return NULL;
	}

	nouv_province->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	if (nouv_province->nom == NULL)
	{
		free(nouv_province);
		return NULL;
	}
	strcpy(nouv_province->nom, nom);

	nouv_province->capteurs = (t_capteur**)malloc(sizeof(t_capteur*) * max_capteurs);
	if (nouv_province->capteurs == NULL)
	{
		free(nouv_province->nom);
		free(nouv_province);
		return NULL;
	}

	nouv_province->max_capteurs = max_capteurs;
	nouv_province->nb_capteurs = 0;


	return nouv_province;
}

void province_liberer(t_province* province)
{
	for (int i = 0; i < province->nb_capteurs; i++)
	{
		//NE PAS FAIRE ÇA car le capteur lui même peut avoir d'autres champs dynamiques
		//free(province->capteurs[i]);
		capteur_liberer(province->capteurs[i]);
	}
	free(province->capteurs);
	free(province->nom);
	free(province);
}

void afficher_province(const t_province* prov)
{
	printf("Province: %s\n", prov->nom);
	printf("Nombre de capteurs: %d\n", prov->nb_capteurs);
	for (int i = 0; i < prov->nb_capteurs; i++)
	{
		printf("** Capteur #%d: **\n", i);
		printf("Ville: %s\n", prov->capteurs[i]->ville);
		printf("  Mesures:\n");
		for (int j = 0; j < MAX_JOURS_MESURES; j++)
		{
			for (int k = 0; k < MAX_MESURES_PAR_JOUR; k++)
			{
				printf("  T: %.2lf, H: %.2lf, P: %.2lf\n",
					prov->capteurs[i]->mesures[j][k].temperature,
					prov->capteurs[i]->mesures[j][k].humidite,
					prov->capteurs[i]->mesures[j][k].pression);
			}
		}
	}
}

void province_trier_capteurs(t_province* prov)
{
	for (int i = prov->nb_capteurs-1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			/*
			si le capteir à l'indice j est supérieur au capteur à l'indice
			j+1, alors permuter les deux capteurs dans le tableau
			si(tab[j] > tab[j+1]
			*/
			/*
			Rappel:  strcmp retourne une valeur qui peut être: 
			0: si les deux chaines sont identiques
			>0: si la première chaine est plus grande que la deuxième
			<0: si la première chaine est plus petite que la deuxieme

			char ch1[10] = "abcd";
			char ch2[10] = "ahtf";

			"afth" est plus grande que "abcd"

			strcmp(ch1, ch2)

			*/


			if (strcmp(prov->capteurs[j]->ville, prov->capteurs[j + 1]->ville) > 0)
			{
				t_capteur* tmp;
				tmp = prov->capteurs[j];
				prov->capteurs[j] = prov->capteurs[j + 1];
				prov->capteurs[j + 1] = tmp;
			}
		}
	}
}

/*
Une fonction qui cherche un capteur dans la province par nom de ville.
Si le capteur se trouve la liste des capteurs de la province, on retourne 
l'indice du capteur dans le tableau province->capteurs.

Si le capteurs n'existe pas (le nom de la ville n'existe pas) on retourne -1.

*/

int province_chercher_capteur(const t_province* prov, const char* nom_ville)
{
	for (int i = 0; i < prov->nb_capteurs; i++)
	{
		if (strcmp(prov->capteurs[i]->ville, nom_ville) == 0)
		{
			return i;
		}
	}
	return -1;
}