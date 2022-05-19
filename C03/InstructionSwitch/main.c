/*
Programme qui affiche le jour de la semaine en toutes lettres, après que l'usager ait
saisi le numéro associé au jour de la semaine (1 pour dimanche, ...,  7 pour samedi). 

Exemple: Si l'usager saisit: 3
Le programme affiche Mardi
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define FFLUSH() do{} while(getchar()!='\n')

int main(void)
{
	int num_jour; //Le numéro du jour saisi par l'usager

	printf("Saisir le numero du jour: ");
	scanf("%d", &num_jour);
	FFLUSH();

	switch (num_jour) //On ne teste que l'égalité (==)
	{
	case 1: //Une valeur numérique littérale 
		printf("Dimanche\n");
		break;
	case 2:
		printf("Lundi\n");
		break;
	case 3:
		printf("Mardi\n");
		break;
	case 4:
		printf("Mercredi\n");
		break;
	case 5:
		printf("Jeudi\n"); break;
	case 6:
		printf("Vendredi\n");
		break;
	case 7:
		printf("Samedi\n");
		break;
	default:  //Le cas defautl est optionnel!
		printf("Erreur de saisie (la valeur doit être entre 1 et 7!\n");
	}


	char lettre; 

	printf("Saisir une lettre: ");
	scanf("%c", &lettre);

	switch (lettre)
	{
	case 'A': 
		printf("Vous avez tapé A!\n"); break;
	case 'B':
		printf("Vous avez tapé B!\n"); break;
	default:
		printf("Ni A ni B\n");
	}


	/*
	if (num_jour == 1)
	{
		printf("Dimanche\n");
	}
	else if (num_jour == 2)
	{
		printf("Lundi\n");
	}
	else if (num_jour == 3)
	{
		printf("Mardi\n");
	}
	else if (num_jour == 4)
	{
		printf("Mercredi\n");
	}
	else if (num_jour == 5)
	{
		printf("Jeudi\n");
	}
	else if (num_jour == 6)
	{
		printf("Vendredi\n");
	}
	else if (num_jour == 7)
	{
		printf("Samedi\n");
	}
	else
	{
		printf("Mauvaise saiie (de `1 à 7!)\n");
	}*/


	system("pause");
	return EXIT_SUCCESS;
}