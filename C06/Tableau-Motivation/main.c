/*
Petit programme pour comprendre l'utilité des tableaux en programmation. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_MAX_PRODUITS 10 //Taille maximale du tableau

int main(void)
{
	//Déclaration du tableau les prix, avec une taille MAXIMALE de 20
	//NOTE: La taille doit obligatoirement être une valeur _numérique_ entière
	//double les_prix[NB_MAX_PRODUITS] = {25.5, 30.75, 18, 22};

	//Initialisation à 0 de toutes les cases lors de la déclaration:
	double les_prix[NB_MAX_PRODUITS]; // = { 0 };

	//On initialise les quatre premnières cases du tableau, le compilateur initialisera 
	//automatiquement toutes les autres cases à 0. 
	int nb_presents = 29;

	int i; 

	//INTERDIT: Le seul endroit où on peut initialiser plusieurs cases, c'est lors de la 
	//déclaration du tableau. 
	//les_prix = { 67, 45.5, 89, 10 };


	//les_prix[8] = 67;

	//Mettre le prix du produit #11
	//les_prix[11] = 23.50;

	//Le prix du produit 0
	//les_prix[0] = 50.50;

	printf("Le prix du produit 11: %lf\n", les_prix[11]);

	/*i = 5; 

	les_prix[i] = 125.60;
	
	printf("Le prix du produit 5: %lf\n", les_prix[i]);


	for (i = 0; i < NB_MAX_PRODUITS; i++)
	{
		les_prix[i] = 150;
	}

	for (i = 0; i < NB_MAX_PRODUITS; i++)
	{
		printf("La case %d contient: %lf\n", i, les_prix[i]);
	}*/


	/*Saisie de valeurs par l'usager*/
	int nb_produits = 0 ; //Le nombre de produits saisis
	printf("Saisir les prix de vos produits, maximum 10 produits: (-1 pour terminer)\n");
	do
	{
		printf("Produit %d: ", nb_produits);
		scanf("%lf", &les_prix[nb_produits]);
		nb_produits++;
	} while (les_prix[nb_produits - 1] != -1 && nb_produits<NB_MAX_PRODUITS);
	nb_produits--;

	//nb_produits contient la taille EFFECTIVE

	//Affichage des prix saisis 
	for (i = 0; i < nb_produits; i++)
	{
		printf("La case %d contient: %lf\n", i, les_prix[i]);
	}


	//Calcul de la moyenne des prix
	double moyenne = 0; 
	for (i = 0; i < nb_produits; i++)
	{
		moyenne += les_prix[i];
	}
	moyenne = moyenne / nb_produits;

	printf("La moyenne des prix saisis: %lf\n", moyenne);

	/*double prix_p0,
		prix_p1,
		prix_p2,
		prix_p3,
		prix_p4;

	double* adr_var;

	for (int i = 0; i < 5; i++)
	{
		printf("Veuillez saisir le prix du produit %d: ", i);
		switch (i)
		{
		case 0: adr_var = &prix_p0; break;
		case 1: adr_var = &prix_p1; break;
		case 2: adr_var = &prix_p2; break;
		case 3: adr_var = &prix_p3; break;
		case 4: adr_var = &prix_p4; break;
		}
		scanf("%lf", adr_var);
	}
	

	printf("Veuillez saisir le prix du produit 1: ");
	scanf("%lf", &prix_p1);

	printf("Veuillez saisir le prix du produit 2: ");
	scanf("%lf", &prix_p2);

	printf("Veuillez saisir le prix du produit 0: ");
	scanf("%lf", &prix_p3);

	printf("Veuillez saisir le prix du produit 0: ");
	scanf("%lf", &prix_p4);*/


	system("pause");
	return 0;
}