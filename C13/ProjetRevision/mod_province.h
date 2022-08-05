#ifndef MOD_PROVINCE__H_
#define MOD_PROVINCE__H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mod_capteur.h"

#define MAX_JOURS_MESURES 2
#define MAX_MESURES_PAR_JOUR 2

typedef struct t_province
{
	char* nom; //Chaine de caractères (tableau de caractères) de taille dynamique
	t_capteur** capteurs; //Tableau dynamique 1D de références vers des capteurs
	int nb_capteurs; //Taille effective du tableau de capteurs
	int max_capteurs; 
} t_province;


t_province* province_init(char* nom, int max_capteurs);

void province_liberer(t_province* province);

void afficher_province(const t_province* prov);

void province_trier_capteurs(t_province* prov);

int province_chercher_capteur(const t_province* prov, const char* nom_ville);

#endif