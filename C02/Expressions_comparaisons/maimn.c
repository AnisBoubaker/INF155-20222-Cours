
#define _CRT_SECURE_NO_WARNINGS //Pour le scanf, toujours le mettre au dessus de #include
#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int resultat; 
	int x = 5; 



	resultat = 20 < 10;

	printf("10 < 20 = %d \n", resultat);

	printf("x entre 0 et 10? : %d\n",  0 < x && x < 10     );

	printf("%d", x *= 2);

	system("pause");
	return EXIT_SUCCESS;
}