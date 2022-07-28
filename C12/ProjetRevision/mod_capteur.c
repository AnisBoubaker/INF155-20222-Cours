#include "mod_capteur.h"

t_capteur* capteur_init(const char* ville)
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

	strcpy(nouv_capteur->ville, ville);

	return nouv_capteur; 
}

void capteur_liberer(t_capteur* le_capteur)
{
	free(le_capteur->ville);
	free(le_capteur);
}