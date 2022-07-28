#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include <stdlib.h>
#include "mod_mesure.h"


#define MAX_JOURS_MESURES 2
#define MAX_MESURES_PAR_JOUR 2


typedef struct t_capteur
{
	char* ville; 
	double latitude;
	double longitude;
	t_mesure mesures[MAX_JOURS_MESURES][MAX_MESURES_PAR_JOUR];
} t_capteur; 


t_capteur* capteur_init(char* ville, double latitude, double longitude);


void capteur_liberer(t_capteur* capteur);

#endif