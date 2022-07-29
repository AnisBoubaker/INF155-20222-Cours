/*
Programme qui gère les données recueillies par plusieurs capteurs météorologiques 
à travers le pays.

Auteurs: Groupe INF155-01 É2022
Date: 2022-07-28
*/

#include <stdio.h>
#include <stdlib.h>
#include "mod_mesure.h"
#include "mod_capteur.h"







int main(void)
{
	t_mesure ma_mesure; 
	t_capteur mon_capteur; 

	t_mesure* mesure_dyn;

	t_mesure** tab_mesures;

	tab_mesures = (t_mesure**)malloc(sizeof(t_mesure*)*100);
	tab_mesures[0] = mesure_init();
	tab_mesures[0]->temperature = 35;
	
	mesure_dyn = mesure_init();


	ma_mesure.temperature = 25; 
	ma_mesure.pression = 101; 
	ma_mesure.humidite = 45;
	ma_mesure.jour = JEUDI;

	mesure_dyn->temperature = 28;

	t_capteur* un_capteur; 

	un_capteur = capteur_init("Montreal");




	system("pause");
	return EXIT_SUCCESS;
}