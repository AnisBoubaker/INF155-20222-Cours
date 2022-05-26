
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
	int nombre_aleatoire; 
	int compteur = 0; 
	//Initialiser le générateur de nombres aléatoires
	srand((unsigned int)time(NULL));
	rand();

	

	
	while (compteur < 20)
	{
		nombre_aleatoire = nb_aleatoire(1, 10);
		printf("Nombre : %d\n", nombre_aleatoire);
		compteur++;
	}

	system("pause");
	return EXIT_SUCCESS;
}
