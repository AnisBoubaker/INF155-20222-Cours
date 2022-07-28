#define _CRT_SECURE_NO_WARNINGS

#include "mod_capteur.h"

t_capteur* capteur_init(char* ville, double latitude, double longitude)
{
	t_capteur* nouv_capteur = NULL;

	nouv_capteur = (t_capteur*)malloc(sizeof(t_capteur));
	if (!nouv_capteur)
	{
		return NULL;
	}

	nouv_capteur->ville = (char*)malloc(sizeof(char) * (strlen(ville) + 1));
	if (!nouv_capteur->ville)
	{
		free(nouv_capteur);
		return NULL;
	}
	strcpy(nouv_capteur->ville, ville);

	nouv_capteur->latitude = latitude;
	nouv_capteur->longitude = longitude; 
}


void capteur_liberer(t_capteur* capteur)
{
	free(capteur->ville);
	free(capteur);
}