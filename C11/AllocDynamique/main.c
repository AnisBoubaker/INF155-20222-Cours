

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int* mon_entier = NULL; //Initialement mon pointeur ne pointe vers rien (NULL)

	int* des_entiers = NULL;


	//Allouer de la mémoire dynamiquement dans le tas, on utilise la fonction:
	//malloc (memory allocate)

	//malloc(100); //allouer 100 octets

	mon_entier = (int*)malloc(sizeof(int));
	*mon_entier = 20;
	printf("L'adresse mon_entier contient: %d\n", *mon_entier);


	des_entiers = (int*)malloc(5 * sizeof(int));


	des_entiers[0] = 100;  // eq à: *(des_entiers+0) = 100
	printf("L'adresse des_entiers contient: %d\n", *des_entiers);

	des_entiers[1] = 120; //eq. à: *(des_entiers+1) = 120
	printf("L'adresse des_entiers+1 contient: %d\n", *(des_entiers+1));

	*(des_entiers + 2) = 150;
	printf("L'adresse des_entiers+1 contient: %d\n", *(des_entiers + 2));

	system("pause");
	return EXIT_SUCCESS;


}