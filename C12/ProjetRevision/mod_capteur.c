#define _CRT_SECURE_NO_WARNINGS

#include "mod_capteur.h"

t_capteur* capteur_init(const char* ville, int nb_lignes_mesures, int nb_colonnes_mesures)
{
	t_capteur* nouv_capteur = NULL; 

	nouv_capteur = (t_capteur*)malloc(sizeof(t_capteur));
	if (nouv_capteur == NULL)
	{
		return NULL;
	}

	nouv_capteur->ville = (char*)malloc(sizeof(char) * (strlen(ville)+1) );
	if (nouv_capteur->ville == NULL)
	{
		free(nouv_capteur);
		return NULL;
	}

	nouv_capteur->mesures = (t_mesure**)malloc(sizeof(t_mesure*) * nb_lignes_mesures);
	if (nouv_capteur->mesures == NULL)
	{
		free(nouv_capteur->ville);
		free(nouv_capteur);
		return NULL;
	}

	for (int i = 0; i < nb_lignes_mesures; i++)
	{
		nouv_capteur->mesures[i] = (t_mesure*)malloc(sizeof(t_mesure) * nb_colonnes_mesures);
		if (nouv_capteur->mesures[i] == NULL)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				free(nouv_capteur->mesures[j]);
			}
			free(nouv_capteur->mesures);
			free(nouv_capteur->ville);
			free(nouv_capteur);
			return NULL;
		}
	}

	strcpy(nouv_capteur->ville, ville);
	nouv_capteur->nb_lignes_mesures = nb_lignes_mesures;
	nouv_capteur->nb_colonnes_mesures = nb_colonnes_mesures;

	return nouv_capteur; 
}

void capteur_liberer(t_capteur* le_capteur)
{
	for (int i = 0; i < le_capteur->nb_lignes_mesures; i++)
	{
		free(le_capteur->mesures[i]);
	}
	free(le_capteur->mesures);
	free(le_capteur->ville);
	free(le_capteur);
}