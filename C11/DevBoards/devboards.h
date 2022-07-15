#ifndef DEVBOARD__H_
#define DEVBOARD__H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_NUMSERIE 20


typedef struct devboard
{
	int type_architecture; //1: ESP, 2: Atmel, 3: Motorola
	int nb_io_pins;
	char num_serie[TAILLE_MAX_NUMSERIE];
} devboard;


/*
Fonction init, ou encore appelée fonction "constructeur"
Alloue un devboard et initialise ses champs avec des valeurs
par défaut. Retourne une adresse non NULL si l'allocation a bien
fonctionné, ou NULL sinon.
Paramètres: Aucun.
Retour: Référence vers le nouveau DevBoard créé (alloué dynamiquement)
*/
devboard* devboard_init(void);

/*
Affiche les champs d'un DevBoard dans la console. 
Paramètres: 
- board: Référence vers le devborad à afficher.
Retour: Aucun
*/
void devboard_afficher(const devboard* board);


/*
Saisit les informations d'un devboard depuis la console..
Paramètres:
- board: Référence vers le devborad où les informations saisies seront stockées.
Retour: Aucun
*/
void devboard_saisir(devboard* board);




#endif