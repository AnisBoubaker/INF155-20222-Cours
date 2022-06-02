
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int somme_multiples(int depart, int fin, int coeff);
int somme_multiples_v2(int depart, int fin, int coeff);

int main(void)
{
	int min, max, sauts;
	int somme;


	min = 50;
	max = 140;
	sauts = 27;

	somme = somme_multiples_v2(50, 140, 27);

	printf("La somme des multiples de %d entre %d et %d est: %d\n", sauts, min, max, somme);

	system("pause");

	return EXIT_SUCCESS;
}


int somme_multiples(int depart, int fin, int coeff)
{
	int somme = 0;
	int courant = depart;

	/*while (courant <= fin)
	{
		if (courant % coeff == 0)
		{
			somme += courant;
		}
		courant++; 
	}*/
	for (courant = depart; courant <= fin || courant % coeff == 0; courant++)
	{
		if (courant % coeff == 0)
		{
			somme += courant;
		}
	}

	return somme;
}


int somme_multiples_v2(int depart, int fin, int coeff)
{
	int somme = 0;
	int courant = depart;

	if (depart % coeff)
	{
		courant = depart + (coeff - depart % coeff);
	}

	for (  ; courant <= fin; courant += coeff)
	{
		somme += courant;
	}

	return somme;

}