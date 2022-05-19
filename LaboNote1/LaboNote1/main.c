
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double mensualite;
	double revenu_annuel;
	int nb_personnes; 
	double revenu_dispo; 

	printf("Saisir le montant des mensualites: ");
	scanf("%lf", &mensualite);

	printf("Saisir le revenu annuel: ");
	scanf("%lf", &revenu_annuel);

	printf("Saisir le nombre de personnes dans le foyer: ");
	scanf("%d", &nb_personnes);

	revenu_dispo = (revenu_annuel / 24) - (nb_personnes * 600);

	if (revenu_dispo >= mensualite * 1.5)
	{
		printf("Le risque est faible.\n");
	}
	else if (revenu_dispo >= mensualite * 1.2)
	{
		printf("Le risque est modere.\n");
	}
	else if (revenu_dispo >= mensualite)
	{
		printf("Le risque est eleve. \n");
	}
	else
	{
		printf("Le risque est tres eleve. \n");
	}

	system("pause");
	return EXIT_SUCCESS;

}
