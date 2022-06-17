
#include "mod_tris.h"

void tri_insertion(int tab[], int taille)
{
	int i, j;
	int x; //Stocke temporairement la valeur à déplacer.

	for (i = 1; i < taille; i++)
	{
		x = tab[i];
		j = i;
		while (j > 0 && tab[j - 1] > x)
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = x;
	}
	afficher_tab(tab, taille);
}

void tri_selection(int tab[], int taille)
{
	int indice_min;

	for (int i = 0; i < taille; i++)
	{
		indice_min = i;
		for (int j = i + 1; j < taille; j++)
		{
			if (tab[j] < tab[indice_min])
			{
				indice_min = j;
			}
		}
		if (indice_min != i)
		{
			int copie;
			copie = tab[i];
			tab[i] = tab[indice_min];
			tab[indice_min] = copie;
		}
	}
}

void tri_bulles(int tab[], int taille)
{
	for (int i = taille - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				int copie;
				copie = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = copie;
			}
		}
	}
}

void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d\t", tab[i]);
	}
	printf("\n");
}