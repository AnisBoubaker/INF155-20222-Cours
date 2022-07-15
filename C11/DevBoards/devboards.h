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
Fonction init, ou encore appel�e fonction "constructeur"
Alloue un devboard et initialise ses champs avec des valeurs
par d�faut. Retourne une adresse non NULL si l'allocation a bien
fonctionn�, ou NULL sinon.
Param�tres: Aucun.
Retour: R�f�rence vers le nouveau DevBoard cr�� (allou� dynamiquement)
*/
devboard* devboard_init(void);

/*
Affiche les champs d'un DevBoard dans la console. 
Param�tres: 
- board: R�f�rence vers le devborad � afficher.
Retour: Aucun
*/
void devboard_afficher(const devboard* board);


/*
Saisit les informations d'un devboard depuis la console..
Param�tres:
- board: R�f�rence vers le devborad o� les informations saisies seront stock�es.
Retour: Aucun
*/
void devboard_saisir(devboard* board);




#endif