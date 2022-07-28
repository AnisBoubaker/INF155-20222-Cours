#define _CRT_SECURE_NO_WARNINGS

#include "mod_province.h"


t_province* province_init(char* nom, int nb_max_capteurs) 
{
	t_province* nouv_prov = NULL; 

	nouv_prov = (t_province*)malloc(sizeof(t_province));

	if (!nouv_prov)
	{
		return NULL; 
	}
	nouv_prov->nom = (char*)malloc(sizeof(char) * (strlen(nom) + 1));
	if (!nouv_prov->nom)
	{
		free(nouv_prov);
		return NULL;
	}
	strcpy(nouv_prov->nom, nom);

	nouv_prov->capteurs = (t_capteur**)malloc(sizeof(t_capteur*) * nb_max_capteurs);
	if (!nouv_prov->capteurs)
	{
		free(nouv_prov->nom);
		free(nouv_prov);
		return NULL;
	}
	nouv_prov->max_capteurs = nb_max_capteurs;
	nouv_prov->nb_capteurs = 0;


	return nouv_prov;
}


void province_liberer(t_province* prov) {
	free(prov->nom);
	for (int i = 0; i < prov->nb_capteurs; i++)
	{
		capteur_liberer(prov->capteurs[i]);
	}
	free(prov);
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