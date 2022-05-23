/*

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int max;
	double factorielle;
	int courant;

	printf("Max ? ");
	scanf("%d", &max);

	factorielle = 1;
	courant = 1;

	while (courant <= max)
	{
		factorielle = factorielle * courant;
		courant++;
	}

	printf("1* ... * %d = %.0lf\n", max, factorielle);





	system("pause");
	return 0;
}