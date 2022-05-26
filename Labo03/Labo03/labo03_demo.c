/*
Écrire un programme qui estime la limite du produit (1/2)^n pour n allant de 0 à 
à +inf.

Donc on souhaite la limite de (1/2)^0 * (1/2)^1 * (1/2)^2 * .... * (1/2)^n


*/

#define MAX 60

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	int n = 0;
	double produit; 


	produit = 1; 
	while ( n < MAX )
	{
		produit = produit * pow(0.5, n);
		n++;
	}

	printf("La limite est de: %e\n", produit);

	system("pause");
	return EXIT_SUCCESS;
}