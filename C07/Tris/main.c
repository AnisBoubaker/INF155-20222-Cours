
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX_TAB 100

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);

int main(void)
{
	int un_tab[TAILLE_MAX_TAB] = { 44,10,20,55,10,24,35 };

	afficher_tab(un_tab, 7);
	tri_insertion(un_tab, 7);
	afficher_tab(un_tab, 7);

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