/*
Écrire un programme qui demande à l'usager de saisir une valeur entière entre 0 et 100.

Si l'usager saisit une valeur erronée, le programme doit lui demander de saisir à nouveau, 
et recommencer tant que on n'obtient pas de valeur valide. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int saisie; 
	
	
	//printf("Saisir une valeur entre 0 et 100: ");
	//scanf("%d", &saisie);

	/*saisie = 101; 
	while (saisie < 0 || saisie>100)
	{
		printf("Saisir une valeur entre 0 et 100: ");
		scanf("%d", &saisie);
	}*/

	do
	{
		printf("Saisir une valeur entre 0 et 100: ");
		scanf("%d", &saisie);

	} while (saisie < 0 || saisie>100);

	printf("gagne!\n");


	system("pause");
	return 0; 
}