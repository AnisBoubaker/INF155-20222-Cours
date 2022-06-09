/*
Programme qui simule um jeu de paris uniformes de 1$ (autant de chances de gagner ou de perdre � chaque pari).

Auteur:
Date: 2022-06-07
*/


#include <stdlib.h>
#include <stdio.h>

//Le nombre maximal de paris � ne pas d�passer
#define MAX_PARIS 10000


/**********************************************************
 *        D�CLARATION DES PROTOTYPES DE FONCTIONS
 **********************************************************/
 /*
 Retourne un nombre al�atoire entre min et max, inclusivement.
 */
int nb_aleatoire(int min, int max);


/**********************************************************
 *                 FONCTION PRINCIPALE
 **********************************************************/
int main(void)
{
	int mise_initiale; //Montant de d�part en possession du parieur
	int nb_paris; //Nombre total de paris effectu�s avant d'�tre ruin�
	int montant_max; //Montant maximal qui a �t� en possession du joueur

	srand((unsigned int)time(NULL));
	rand();

	//Pour des fins de test, on met juste une valeur de test ici (inutile de demander � l'usager)
	mise_initiale = 15;

	//On calcule le nombre de paris avant la ruine et le montant obtenu le plus �lev�
	nb_paris = temps_de_ruine(mise_initiale, &montant_max );


	//On affiche les r�sultats
	printf("Avec une mise initiale de %d, le joueur a parie %d fois avant d'etre ruine.\n", mise_initiale, nb_paris);
	printf("Le montant maximal qu'il a eu en sa possession est: %d\n", montant_max);



	system("pause");
	return EXIT_SUCCESS;
}

/**********************************************************
 *               D�FINITION DES FONCTIONS
 **********************************************************/

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int temps_de_ruine(int montant_initial, int* ptr_somme_max)
{
	int montant_actuel = montant_initial;
	int montant_max = montant_initial;
	int nb_paris = 0;
	int jeu; 

	/*for (nb_paris = 0; montant_actuel > 0 && nb_paris < MAX_PARIS; nb_paris++)
	{

	}*/

	*ptr_somme_max = montant_initial;

	while (montant_actuel > 0 && nb_paris < MAX_PARIS)
	{
		jeu = nb_aleatoire(0, 1);
		//0 = perdu, 1 = gagn�
		if (jeu == 1)
		{
			montant_actuel++;
		}
		else
		{
			montant_actuel--;
		}
		//if (montant_actuel > montant_max)
		if(montant_actuel > *ptr_somme_max)
		{
			//montant_max = montant_actuel;
			*ptr_somme_max = montant_actuel;
		}

		nb_paris++;
	}

	//*ptr_somme_max = montant_max;

	return nb_paris;
}
