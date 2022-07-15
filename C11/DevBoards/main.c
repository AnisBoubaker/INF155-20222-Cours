
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

	system("pause");
	return 0; 

}

