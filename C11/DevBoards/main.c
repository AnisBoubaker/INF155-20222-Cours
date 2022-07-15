
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "devboards.h"
#include <string.h>


int main(void)
{
	devboard* board1 = NULL; 

	devboard** tousmes_boards = NULL;  //Tableau dynamique d'adresses de devboard

	tousmes_boards = (devboard**)malloc(50 * sizeof(devboard*));
	if (tousmes_boards == NULL)
	{
		printf("Pas de memoire!\n");
		exit(EXIT_FAILURE);
	}


	board1 = devboard_init();
	if (board1 == NULL)
	{
		printf("Plus de memoire!");
		exit(EXIT_FAILURE);
	}

	devboard_afficher(board1);

	board1->type_architecture = 1;
	board1->nb_io_pins = 20;
	//Numero de série: "145RT67"
	strncpy(board1->num_serie , "145RT67", 20);

	devboard_afficher(board1);

	//On crée et ajoute trois devboards au tableau
	tousmes_boards[0] = devboard_init();
	tousmes_boards[1] = devboard_init();
	tousmes_boards[2] = devboard_init();

	//Ex.: On peu modifier le nombre de pins du board 1 à 15:
	tousmes_boards[1]->nb_io_pins = 15;

	//Pour chaque devboard, on demande à l'usager de saisir les informations
	//pour les 3 boards ajoutés. 
	for (int i = 0; i < 3; i++)
	{
		devboard_saisir(tousmes_boards[i]);
	}

	//On affiche toutes les informations saisies: 
	printf("\n\n AFFICHAGE DES BOARDS SAISIS \n\n");
	for (int i = 0; i < 3; i++)
	{
		devboard_afficher(tousmes_boards[i]);
	}

	system("pause");
	return 0; 

}

