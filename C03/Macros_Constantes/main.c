/*
Programme qui illustre l'utilisation des macros (#define) pour
d�finir des constantes.
*/

#include <stdio.h> //Librairie qui inbclut les fonctions d'entr�e/Sortie (Standard Input/Output)
#include <stdlib.h> //Librairie qui d�finit un ensemble de fonctions de base et des constantes
					// Standard Librairie

#define PI 3.1415 //Cr�er la constante PI (ATTENTION: TOUJOURS EN MAJUSCULES)

int main(void)
{
	double rayon; 
	double surface;
	const double pi = 3.1415; 


	printf("Le rayon: ");
	scanf("%lf", &rayon);

	//pi = pi * 2; 

	//PI = 3.14;  // 3.1415 = 3.14

	surface = PI * rayon * rayon; 

	

	surface = pi * rayon * rayon; 
	return EXIT_SUCCESS;
}