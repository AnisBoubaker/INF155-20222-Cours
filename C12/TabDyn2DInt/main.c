#include <stdio.h>
#include <stdlib.h>

int** creer_tab_2d(int nb_lignes, int nb_colonnes);

int main(void)
{
	int** mon_tab2d; 

	mon_tab2d = creer_tab_2d(3, 5);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mon_tab2d[i][j] = i * j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", mon_tab2d[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0; 
}

int** creer_tab_2d(int nb_lignes, int nb_colonnes)
{
	int** tab2d = NULL;

	tab2d = (int**)malloc(sizeof(int*) * nb_lignes);
	if (tab2d == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		tab2d[i] = (int*)malloc(sizeof(int) * nb_colonnes);
		if (tab2d[i] == NULL)
		{
			for (int j = i-1 ; j >= 0; j--)
			{
				free(tab2d[j]);
			}
			free(tab2d);
			return NULL;
		}
	}

	return tab2d;


}