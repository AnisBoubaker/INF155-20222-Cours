
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int une_var = 15;
	
	//premier_pointeur va contenir des adresses qui nous m�nent vers des valeurs int
	int* premier_pointeur;

	int** deuxieme_pointeur; 


	printf("La variable une_var contient: %d\n", une_var);

	/*
	%p: Afficher une adresse m�moire

	&une_variable: l'adresse m�moire de une_variable
	*/
	printf("L'adresse de une_var: %p\n", &une_var);


	premier_pointeur = &une_var;

	printf("L'adresse contenue dans premier_pointeur est: %p\n", &premier_pointeur);

	//D�r�f�rencer le pointeur pour changer la valeur qui se trouve � l'adresse contenue par le pointeur
	// L'op�rateur *

	*premier_pointeur = 100;

	printf("La variable une_var contient: %d\n", une_var);


	deuxieme_pointeur = &premier_pointeur;

	**deuxieme_pointeur = 1500;

	//int* premier_pointeur;
	printf("Contenu myst�re: %d\n", *premier_pointeur);

	printf("La variable une_var contient: %d\n", une_var);

	system("pause");
	return 0;
}