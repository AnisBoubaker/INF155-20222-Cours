/*
Petit programme pour comprendre l'utilité des tableaux en programmation.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_MAX_PRODUITS 10 //Taille maximale du tableau


/*
Prototypes: 
*/
void afficher_tableau(double tab[], int taille);
double moyenne_tab(double tab[], int taille);
void doubler(double tab[], int taille);


int main(void)
{
	double les_prix[NB_MAX_PRODUITS]; //Tableau qui stocke les prix de la boutique
	int nb_produits = 0; //Le nombre de produits dans le tableau (taille effective)
	int i; //Compteur de boucle
	double moyenne = 0; //La moyenne des prix dans le tableau
	
	/*Saisie de valeurs par l'usager*/
	printf("Saisir les prix de vos produits, maximum 10 produits: (-1 pour terminer)\n");
	do
	{
		printf("Produit %d: ", nb_produits);
		scanf("%lf", &les_prix[nb_produits]);
		nb_produits++;
	} while (les_prix[nb_produits - 1] != -1 && nb_produits < NB_MAX_PRODUITS);
	nb_produits--; //On décrémente car le -1 ne fait pas partie des valeurs effectives.


	//Affichage des prix saisis 
	//IMPORTANT: Quand on passe un tableau en paramètre, on ne met que le nom du tableau (pas de crochets)
	afficher_tableau(les_prix, nb_produits);

	//Calcul et affichage de la moyenne des prix
	printf("La moyenne des prix saisis: %lf\n", moyenne_tab(les_prix, nb_produits) );

	doubler(les_prix, nb_produits);

	afficher_tableau(les_prix, nb_produits);


	system("pause");
	return 0;
}


//IMPORTANT: Toute fonction qui reçoit un tableau, doit aussi recevoir la taille effective du tableau
//Le paramètre tab est de type const = il est interdit de modifier le contenu du tableau dans la fonction
void afficher_tableau(const double tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%lf\n", tab[i]);
		//tab[i] = 0;
	}
 
}

double moyenne_tab(const double tab[], int taille)
{
	double somme = 0; 

	for (int i = 0; i < taille; i++)
	{
		somme += tab[i];
	}

	return somme / taille;
}

void doubler(double tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] = tab[i] * 2;
	}
}

void doubler_int(int val)
{
	val = val * 2; 
}