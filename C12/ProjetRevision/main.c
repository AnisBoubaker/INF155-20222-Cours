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
	t_capteur* capteur_mtl;
	t_capteur* capteur_quebec;

	FILE* mon_fichier;


	province = province_init("Quebec", 10);

	capteur_mtl = capteur_init("Montreal", MAX_JOURS_MESURES, MAX_MESURES_PAR_JOUR);
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


	afficher_province(province);


	//Ouverture en mode écriture: 
	//Si le fichier existe: il est écrasé
	//Sinon le fichier est créé
	mon_fichier = fopen("sauvegarde.txt", "w");
	if (mon_fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier en écriture!\n");
		system("pause");
		exit(EXIT_FAILURE);
	}

	fprintf(mon_fichier, "%s\n", capteur_mtl->ville);
	fprintf(mon_fichier, "Lat: %.2lf, Lon: %.2lf\n", capteur_mtl->latitude, capteur_mtl->longitude);
	for (int i = 0; i < capteur_mtl->nb_lignes_mesures; i++)
	{
		for (int j = 0; j < capteur_mtl->nb_colonnes_mesures; j++)
		{
			fprintf(mon_fichier, "T: %.2lf, H: %.2lf, P: %.2lf\n",
				capteur_mtl->mesures[i][j].temperature,
				capteur_mtl->mesures[i][j].humidite,
				capteur_mtl->mesures[i][j].pression);
		}
	}
	



	//fprintf(mon_fichier, "Bonjour, nous sommes le %d-%d de l'annee %d\n", 28, 7, 2022);
	//fprintf(mon_fichier, "Nous avons appris à écrire dans un fichier!");

	fclose(mon_fichier);

	system("pause");
	return 0;
}