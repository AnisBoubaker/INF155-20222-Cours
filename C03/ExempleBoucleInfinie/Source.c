/*
Écrire un programme qui fait la somme de tous les entiers entre 1 et une valeur max
saisie par l'usager.

Par ex.: Si l'usager saisit max = 15
Le programme doit affichier 120.
120 = 1 + 2 + 3+ ...+ 15

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int courant = 1;
	int somme = 0;

	while (courant < 50)
	{
		somme += courant;
		courant++;
	}

	system("pause");
	return 0;
}