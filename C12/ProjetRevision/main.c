/*
Programme qui gère les données recueillies par plusieurs capteurs météorologiques 
à travers le pays.

Auteurs: Groupe INF155-01 É2022
Date: 2022-07-28
*/

#include <stdio.h>
#include <stdlib.h>
#include "mod_mesure.h"


#define TAILLE_MAX_VILLE 100

typedef struct t_capteur
{
	char ville[TAILLE_MAX_VILLE]; 
	double latitude; 
	double longitude; 
	t_mesure mesures[365][10];
} t_capteur;

typedef struct t_province
{
	char* nom; //Chaine de caractères (tableau de caractères) de taille dynamique
	t_capteur** capteurs; 
};

int main(void)
{
	t_mesure ma_mesure; 
	t_capteur mon_capteur; 

	t_mesure* mesure_dyn;

	t_mesure** tab_mesures;

	tab_mesures = (tab_mesures**)malloc(sizeof(t_mesure*)*100);

	tab_mesures[0] = mesure_init();
	tab_mesures[0]->temperature = 35;
	
	mesure_dyn = mesure_init();


	ma_mesure.temperature = 25; 
	ma_mesure.pression = 101; 
	ma_mesure.humidite = 45;
	ma_mesure.jour = JEUDI;

	mesure_dyn->temperature = 28;

	system("pause");
	return EXIT_SUCCESS;
}