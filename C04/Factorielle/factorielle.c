/*
Programme qui calcule la factorielle d'un nombre n saisi par l'usager

 n! = 1*2*3*...*n
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int nbr; //Nombre dont on veut calculer la factorielle
	double factorielle; 
	int compteur; 

	printf("Veuillez saisir la valeur pour la factorielle: ");
	scanf("%d", &nbr);

	factorielle = 1; 
	/*compteur = 1; 
	while (compteur <= nbr)
	{
		factorielle = factorielle * compteur;
		compteur++;
	}*/

	for (compteur = 1; compteur <= nbr; compteur++)
	{
		factorielle = factorielle * compteur;
	}


	printf("%d ! = %.0lf \n", nbr, factorielle);



	system("pause");
	return EXIT_SUCCESS;

}