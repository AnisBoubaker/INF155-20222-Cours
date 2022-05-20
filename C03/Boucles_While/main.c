/*
Écrire un programme qui identifie tous les entiers entre 5 et 15 qui sont multiples de 3. 

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int courant; 
	int debut; 
	int fin; 

	printf("Debut:");
	scanf("%d", &debut);

	printf("Fin:");
	scanf("%d", &fin);



	courant = debut;

	while (courant <= fin)
	{
		if (courant % 3 == 0)
		{
			printf("%d ", courant);
		}
		courant++;
	}

	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
	
	/*if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;
	if (courant % 3 == 0)
	{
		printf("%d ", courant);
	}
	courant++;*/


	system("pause");
	return EXIT_SUCCESS;
}