#include "devboards.h"

/*
Alloue un devboard et initialise ses champs avec des valeurs
par défaut. Retourne une adresse non NULL si l'allocation a bien
fonctionné, ou NULL sinon.
*/
devboard* devboard_init(void)
{
	devboard* le_board;
	le_board = (devboard*)malloc(sizeof(devboard));
	if (le_board == NULL)
	{
		return NULL;
	}

	le_board->type_architecture = 99;
	le_board->nb_io_pins = 0;
	strcpy(le_board->num_serie, "");

	return le_board; 
}


void devboard_afficher(const devboard* board)
{
	printf("BOARD: %s\n", board->num_serie);
	printf("Architecture: ");
	switch (board->type_architecture)
	{
	case 0:
		printf("ESP");
		break;
	case 1:
		printf("Atmel");
		break;
	case 2:
		printf("Motorola");
		break;
	default:
		printf("Inconnu!");
	}
	printf("\n");
	printf("Nombre de pins: %d\n", board->nb_io_pins);
}