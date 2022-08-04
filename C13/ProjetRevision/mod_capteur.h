#ifndef MOD_CAPTEUR__H_
#define MOD_CAPTEUR__H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mod_mesure.h"

#define TAILLE_MAX_VILLE 100

typedef struct t_capteur
{
	char* ville;
	double latitude;
	double longitude;
	t_mesure** mesures; //Tableau dynamique 2D de t_mesure
	int nb_lignes_mesures; 
	int nb_colonnes_mesures;
} t_capteur;


t_capteur* capteur_init(const char* ville, int nb_lignes_mesures, int nb_colonnes_mesures);

void capteur_liberer(t_capteur* le_capteur);

/*
Sauvegarde les infoirmations d'un capteur dans un fichier texte, 
PARAMETRES:
nom_fichier: Nom du fichier qui contiendra les informations du capteur. 
Retour: Valeur vraie si la sauvegarde a fonctionné, fausse sinon.
*/
int capteur_sauvegarder(const char* nom_fichier, const t_capteur* cap);


/*
Stocke dans un fichier les mesures d'un capteur de façon tabulée
*/
int capteur_sauvegarder_v2(const char* nom_fichier, const t_capteur* cap);

#endif