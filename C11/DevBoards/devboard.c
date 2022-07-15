#include "devboards.h"

#define FFLUSH() do{} while(getchar()!='\n')

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
	case 1:
		printf("ESP");
		break;
	case 2:
		printf("Atmel");
		break;
	case 3:
		printf("Motorola");
		break;
	default:
		printf("Inconnu!");
	}
	printf("\n");
	printf("Nombre de pins: %d\n", board->nb_io_pins);
}

void devboard_saisir(devboard* board)
{
	printf("Saisie des informations d'un devboard: \n");
	printf("---------------------------------------\n");
	printf("Numéro de serie: ");
	fgets(board->num_serie, TAILLE_MAX_NUMSERIE, stdin);
	board->num_serie[strlen(board->num_serie) - 1] = '\0'; //On enlève le \n 

	//Note: il serait pertinent ici de se créer une fonction du type: 
	//int saisir_entier(char* message, int min, int max) 
	//qui fait la boucle de validation. Car on fait 2 fois la même chose...
	do
	{
		printf("Architecture (1: ESP, 2: Atmel, 3: Motorola) : ");
		scanf("%d", &(board->type_architecture));
		FFLUSH();
	} while (board->type_architecture < 1 && board->type_architecture > 3);

	do
	{
		printf("Nombre de pins : ");
		scanf("%d", &(board->nb_io_pins));
		FFLUSH();
	} while (board->nb_io_pins <= 0 );
}