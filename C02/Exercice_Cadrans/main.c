
#define _CRT_SECURE_NO_WARNINGS //Pour le scanf, toujours le mettre au dessus de #include
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	double x, y; //Coordonnées du point

	printf("Saisir l'abscisse: "); 
	scanf("%lf", &x);

	printf("Saisir l'ordonnee: ");
	scanf("%lf", &y);

	/*if (x >= 0)
	{
		if (y >= 0)
		{
			printf("On est dans le cadran #1\n");
		}
		else
		{
			printf("On est dans le cadran #2\n");
		}
	}
	else
	{
		if (y >= 0)
		{
			printf("On est dans le cadran #4\n");
		}
		else
		{
			printf("On est dans le cadran #3\n");
		}
	}*/

	int cadran = 0; 

	if (x > 0 && y > 0)
	{
		cadran = 1;
	}
	else if (x > 0 && y < 0)
	{
		cadran = 2;
	}
	else if (x < 0 && y < 0)
	{
		cadran = 3;
	}
	else
	{
		cadran = 4;
	}

	printf("Le point se trouve dans le cadran"\
		"%d\n", cadran);




	system("pause");
	return EXIT_SUCCESS;
}
