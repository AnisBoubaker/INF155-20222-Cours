/*

Écrire un programme qui demande à l'usager de saisir deux valeurs: 
- Une valeur n entre 2 et 100
- Une valeur k entre 2 et n

Si l'usager se trompe on doit lui demander de resaisir la valeur incorrecte (seulement!)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void afficher_menu(void)
{
	printf("1. Nouveau client\n");
	printf("2. Modifier client\n");
	printf("3. Nouvelle facture\n");
}


//min et max (paramètres): variables mais on assume qu'elles ont déjà été initialisées
int saisie_validation(int min, int max)
{
	int saisie; //La variable saisie est LOCALE à la fonction 

	do
	{
		printf("Saisir une valeur entre %d et %d: ", min, max);
		scanf("%d", &saisie);
	} while (saisie < min || saisie > max);

	return saisie; 
}


int main(void)
{
	int entier1, entier2;
	int saisie;
	int bidon; 

	afficher_menu();

	entier1 = saisie_validation(2, 100);
	entier2 = saisie_validation(2, entier1);

	/*do
	{
		printf("Saisir une valeur entre 2 et 100: ");
		scanf("%d", &entier1);

	} while (entier1 < 2 || entier1>100);*/

	/*do
	{
		printf("Saisir une valeur entre 2 et %d: ", entier1);
		scanf("%d", &entier2);

	} while (entier2 < 2 || entier2>entier1);*/

	printf("gagne!\n");


	system("pause");
	return 0; 
}