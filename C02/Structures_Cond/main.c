
#define _CRT_SECURE_NO_WARNINGS //Pour le scanf, toujours le mettre au dessus de #include
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int saisie; 

	printf("Saisir une valeur entre 0 et 20: ");
	scanf("%d", &saisie);

	//Option A
	if (saisie >= 0 && saisie <= 20)
	{
		printf("Merci! Vous etes bien discipline!\n");
	}
	else
	{
		printf("Vous n'etes pas capable de comprendre une instruction simple!\n");
	}


	if ( 5 )
	{
		printf("Ben oui! 5 c'est vrai!\n");
	}


	if (saisie) // eq.: if(saisie != 0)
	{
		printf("saisie est différent de 0.\n");
	}


	if (5 < saisie < 100) //ATTENTION: condition toujours vraie!
	{
		printf("Saisie est  entre 5 et 100 \n");
	}


	//Option B: à ne pas faire à la maison!
	/*if (saisie >= 0 && saisie <= 20)
	{
		printf("Merci! Vous etes bien discipline!\n");
	}
	if (saisie < 0 || saisie > 20)
	{
		printf("Vous n'etes pas capable de comprendre une instruction simple!\n");
	}*/


	system("pause");
	return EXIT_SUCCESS;

}