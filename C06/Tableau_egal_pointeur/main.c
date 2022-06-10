

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int mon_tab[10] = { 10, 20 , 30 , 40 , 50 , 60, 70, 80, 90, 100 };

	int nb_etudiants = 10; 
	int* un_pointeur; 

	printf("L'adresse de la case 0 est: %p\n", &mon_tab[0]);

	printf("L'adresse du tableau est: %p\n ", mon_tab);


	un_pointeur = &nb_etudiants;

	/*
	supposons que nb_etudiant se trouve à l'adresse 1500. un_pointeur+1 devrait nous donner 1501
	En réalité ce n'est pas ça!
	*/
	un_pointeur = un_pointeur + 1;
	/*
	En ajoutant 1 à un_pointeur, on décale l'adresse se trouvant dans un_pointeur de UNE UNITÉ
	L'unité est définie par le type de pointeur. 
	int* veut dire que l'unité c'est int
	donc un_pointeur+1 décale l'adresse de la taille d'un int (4 octets)
	*/


	printf("Le contenu de la premiere case, en considerant le tableau comme un pointeur: %d\n", *mon_tab);
	printf("Le contenu de la deuxieme case, en considerant le tableau comme un pointeur: %d\n", *(mon_tab+1));

	/*
	Deux notations équivalentes:

	mon_tab[i]  <==> *(mon_tab+i)
	
	*/

	system("pause");
	return EXIT_SUCCESS;
}