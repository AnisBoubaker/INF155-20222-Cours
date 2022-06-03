

#include <stdio.h>
#include <stdlib.h>


/*
Fonction qui trouve le minimum et le maximum parmi val1, val2 et val3
*/
void min_max(int val1, int val2, int val3, int* adr_min, int* adr_max)
{
	int min = val1; 
	int max = val1; 

	if (val2 < min)
	{
		min = val2;
	}
	if (val3 < min)
	{
		min = val3;
	}

	if (val2 > max)
	{
		max = val2;
	}
	if (val3 > max)
	{
		max = val3;
	}

	*adr_min = min;
	*adr_max = max;
}


void tata(void)
{

	int min, max; 

	min_max(100, 45, 78, &min, &max);

}


int main(void)
{
	int plus_petit; 
	int plus_grand;


	min_max(10, 45 , - 2, &plus_petit, &plus_grand);

	printf("Le plus petit est: %d, Le plus grand est: %d\n", plus_petit, plus_grand);

	system("pause");
	return 0; 
}

/*
Passage par référence: 
1. La fonction doit recevoir des adresses: des paramètres de type pointeur
2. Pour poser les résultats aux adresses reçues, il faut déréfe'rencer les pointeurs

Lors de l'appel de la fonction: On passe à la fonction les adresses de variables locales.

*/