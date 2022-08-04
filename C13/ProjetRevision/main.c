/*
Programme qui gère les données recueillies par plusieurs capteurs météorologiques 
à travers le pays.

Auteurs: Groupe INF155-01 É2022
Date: 2022-07-28
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "mod_mesure.h"
#include "mod_capteur.h"
#include "mod_province.h"



int main(void)
{
	t_province* province;
	t_province* ontario;
	t_capteur* capteur_mtl;
	t_capteur* capteur_quebec;

	FILE* mon_fichier;


	province = province_init("Quebec", 10);

	ontario = province_init("Ontario", 25);

	capteur_mtl = capteur_init("Montreal", MAX_JOURS_MESURES, MAX_MESURES_PAR_JOUR);
	capteur_mtl->latitude = 45.51;
	capteur_mtl->longitude = 73.55;
	
	
	capteur_quebec = capteur_init("Ville de Quebec", MAX_JOURS_MESURES, MAX_MESURES_PAR_JOUR);

	province->capteurs[province->nb_capteurs] = capteur_mtl;
	province->nb_capteurs++;
	province->capteurs[province->nb_capteurs] = capteur_quebec;
	province->nb_capteurs++;

	capteur_mtl->mesures[0][0].jour = DIMANCHE;
	capteur_mtl->mesures[0][0].temperature = 25.5;
	capteur_mtl->mesures[0][0].humidite = 45;
	capteur_mtl->mesures[0][0].pression = 101.5;

	capteur_mtl->mesures[0][1].jour = DIMANCHE;
	capteur_mtl->mesures[0][1].temperature = 28.5;
	capteur_mtl->mesures[0][1].humidite = 50;
	capteur_mtl->mesures[0][1].pression = 100;

	capteur_mtl->mesures[1][0].jour = LUNDI;
	capteur_mtl->mesures[1][0].temperature = 28;
	capteur_mtl->mesures[1][0].humidite = 50;
	capteur_mtl->mesures[1][0].pression = 102;

	capteur_mtl->mesures[1][1].jour = LUNDI;
	capteur_mtl->mesures[1][1].temperature = 30;
	capteur_mtl->mesures[1][1].humidite = 49;
	capteur_mtl->mesures[1][1].pression = 100;


	capteur_quebec->mesures[0][0].jour = DIMANCHE;
	capteur_quebec->mesures[0][0].temperature = 25.5;
	capteur_quebec->mesures[0][0].humidite = 45;
	capteur_quebec->mesures[0][0].pression = 101.5;

	capteur_quebec->mesures[0][1].jour = DIMANCHE;
	capteur_quebec->mesures[0][1].temperature = 28.5;
	capteur_quebec->mesures[0][1].humidite = 50;
	capteur_quebec->mesures[0][1].pression = 100;

	capteur_quebec->mesures[1][0].jour = LUNDI;
	capteur_quebec->mesures[1][0].temperature = 28;
	capteur_quebec->mesures[1][0].humidite = 50;
	capteur_quebec->mesures[1][0].pression = 102;

	capteur_quebec->mesures[1][1].jour = LUNDI;
	capteur_quebec->mesures[1][1].temperature = 30;
	capteur_quebec->mesures[1][1].humidite = 51;
	capteur_quebec->mesures[1][1].pression = 102;


	province_liberer(ontario);

	afficher_province(province);

	capteur_sauvegarder_v2("sauvegarde1.txt", capteur_mtl);
	
	char ligne_lue[1000];
	FILE* un_fichier;

	un_fichier = fopen("sauvegarde1.txt", "r");
	if (un_fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier en lecture!\n");
		system("pause");
		return EXIT_FAILURE;
	}

	printf("********* CONTENU DU FICHIER *************\n");

	/*fgets(ligne_lue, 1000, un_fichier);
	printf("%s", ligne_lue);

	fgets(ligne_lue, 1000, un_fichier);
	printf("%s", ligne_lue);*/

	char* resultat;
	do {
		resultat = fgets(ligne_lue, 1000, un_fichier);
		if (resultat != NULL)
		{
			printf("%s", ligne_lue);
		}
	} while (resultat != NULL);

	fclose(un_fichier);


	un_fichier = fopen("sauvegarde1.txt", "r");
	int nb_lignes_fichier; 
	double moyenne_temp=0, 
		moyenne_pression=0, 
		moyenne_humidite=0;

	fscanf(un_fichier, "%d", &nb_lignes_fichier);
	printf("Le fichier contient %d lignes de mesure\n", nb_lignes_fichier);

	for (int i = 0; i < nb_lignes_fichier; i++)
	{
		double temp_lue, hum_lue, press_lue;

		//fscanf(un_fichier, "%lf %lf %lf", &temp_lue, &hum_lue, &press_lue);
		fscanf(un_fichier, "%lf", &temp_lue);
		fscanf(un_fichier, "%lf", &hum_lue);
		fscanf(un_fichier, "%lf", &press_lue);

		moyenne_temp += temp_lue;
		moyenne_humidite += hum_lue;
		moyenne_pression += press_lue;
	}

	moyenne_temp /= nb_lignes_fichier;
	moyenne_humidite /= nb_lignes_fichier;
	moyenne_pression /= nb_lignes_fichier;

	printf("Moyennes: T: %lf, H: %lf, P: %lf\n", moyenne_temp, moyenne_humidite, moyenne_pression);

	system("pause");
	return 0;
}