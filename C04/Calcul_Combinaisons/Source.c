
/*
Programme qui calcule le nombre de combinaisons possibles si on tire k boules
depuis une urne qui contient n boules

n! / ( k!*(n-k)! )

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Déclaration des prototypes
int saisie_validation(int min, int max);
double factorielle(int val);

int main(void)
{
	int nb_boules; //Nombre total de boules dans l'urne
	int nb_tirage; //Nombre de boules prises de l'urne à chaque tirage
	double nb_combinaisons; //Nombre total de combinaisons possibles


	nb_boules = saisie_validation(2, 100);
	nb_tirage = saisie_validation(1, nb_boules);

	nb_combinaisons = factorielle(nb_boules) / (factorielle(nb_tirage) * factorielle(nb_boules - nb_tirage));

	printf("Le nombre de combinaisons possibles pour %d parmi %d est: %.0lf\n", nb_boules, nb_tirage, nb_combinaisons);

	/*int val; 
	double fact; 

	val = saisie_validation(2, 30);
	fact = factorielle(val);

	printf("La factorielle de %d est: %.0lf\n", val, fact);*/


	system("pause");
	return EXIT_SUCCESS;
}




double factorielle(int val)
{
	int i;
	double fact = 1;

	for (i = 1; i <= val; i++)
	{
		fact = fact * i;
	}

	return fact;
}

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
