

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_MAX_PRODUITS 10 //Taille maximale du tableau

#define MAX_ETUDIANTS 60



/*
Prototypes:
*/
void afficher_tab_2d(const int tab[][MAX_ETUDIANTS], int nb_lignes, int nb_colonnes);


int main(void)
{
	/*
	Ligne 0: note du Lab1
	Ligne 1: note du Lab2
	Ligne 2: note du Lab3
	ligne 3: note Intra
	ligne 4: note du final
	Colonnes: étudiant-es
	*/

	//La premiere dimension représente les lignes (convention)
	 //Tableau à 2 dimensions de 5 lignes et 60 colonnes 
	int notes[5][MAX_ETUDIANTS] = { {90, 78, 80, 65, 100, 78} , {55, 78, 98, 98, 89}, {45, 78, 34, 89, 90, 67} };

	int nb_evaluations = 5; 
	int nb_etudiants = 6;

	/*for (int ligne = 0; ligne < nb_evaluations; ligne++)
	{
		for (int colonne = 0; colonne < nb_etudiants; colonne++)
		{
			printf("%d\t", notes[ligne][colonne]);
		}
		printf("\n");
	}*/

	afficher_tab_2d(notes, nb_evaluations, nb_etudiants);


	system("pause");
	return 0;
}

//IMPORTANT: Obligatoire de spécifier la taille maximale du tableau 
void afficher_tab_2d(const int tab[][MAX_ETUDIANTS], int nb_lignes, int nb_colonnes)
{
	for (int ligne=0; ligne < nb_lignes; ligne++)
	{
		for (int colonne = 0; colonne < nb_colonnes; colonne++)
		{
			printf("%d\t", tab[ligne][colonne]);
		}
		printf("\n");
	}
}