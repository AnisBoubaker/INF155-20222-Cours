
#include <stdio.h>
#include <stdlib.h>

#include "mod_tris.h" //Inclure le .h (jamais le .c!!!)

#define TAILLE_MAX_TAB 100



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
