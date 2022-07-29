#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include <string.h>
#include "mod_mesure.h"

#define TAILLE_MAX_VILLE 100

typedef struct t_capteur
{
	char* ville;
	double latitude;
	double longitude;
	t_mesure** mesures;
	int nb_lignes_mesures; 
	int nb_colonnes_mesures;
} t_capteur;


t_capteur* capteur_init(const char* ville, int nb_lignes_mesures, int nb_colonnes_mesures);

void capteur_liberer(t_capteur* le_capteur);


#endif