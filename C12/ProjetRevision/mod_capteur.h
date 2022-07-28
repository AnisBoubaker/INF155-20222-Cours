#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include "mod_mesure.h"

#define TAILLE_MAX_VILLE 100

typedef struct t_capteur
{
	char* ville;
	double latitude;
	double longitude;
	t_mesure mesures[365][10];
} t_capteur;


t_capteur* capteur_init(const char* ville);

void capteur_liberer(t_capteur* le_capteur);


#endif