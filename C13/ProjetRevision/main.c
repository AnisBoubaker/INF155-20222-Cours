#include <stdio.h>
#include <stdlib.h>

#include "mod_province.h"
#include "mod_mesure.h"
#include "mod_capteur.h"


int main(void)
{
	t_province* province; 
	t_capteur* capteur_mtl; 
	t_capteur* capteur_quebec;

	province = province_init("Quebec", 10);

	capteur_mtl = capteur_init("Montreal", 45.50, 73.5);
	capteur_quebec = capteur_init("Ville de Quebec", 46.8, 71.2);

	province->capteurs[province->nb_capteurs++] = capteur_mtl;
	province->capteurs[province->nb_capteurs++] = capteur_quebec;
	
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

	system("pause");
	return 0; 
}