#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//Permutation de variables
	int a = 10; 
	int b = 20; 
	int permut; 

	permut = a; 
	a = b; 
	b = permut; 



	printf("a = %d, b = %d \n", a, b);
	//Doit afficher: a=20, b=10.

	system("pause");
	return EXIT_SUCCESS;
}