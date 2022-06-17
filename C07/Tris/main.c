
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX_TAB 100

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);
void tri_bulles(int tab[], int taille);

int main(void)
{
	int un_tab1[TAILLE_MAX_TAB] = { 44,10,20,55,10,24,35 };
	int un_tab2[TAILLE_MAX_TAB] = { 44,10,20,55,10,24,35 };
	int un_tab3[TAILLE_MAX_TAB] = { 44,10,20,55,10,24,35 };

	int tab2d[2][3] = { {10, 5, 78}, {189, 2, 176} };


	afficher_tab(un_tab1, 7);
	tri_insertion(un_tab1, 7);
	afficher_tab(un_tab1, 7);

	tri_selection(un_tab2, 7);
	afficher_tab(un_tab2, 7);

	tri_bulles(un_tab3, 7);
	afficher_tab(un_tab3, 7);

	

	printf("\n\nTri du tableau 2D:\n");
	tri_insertion(tab2d[0], 3);
	tri_insertion(tab2d[1], 3);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%d\t", tab2d[i][j]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}

void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d\t", tab[i]);
	}
	printf("\n");
}

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