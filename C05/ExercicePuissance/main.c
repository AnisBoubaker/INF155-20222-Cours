/*
Écrire une fonction puissance qui calcule la puissance d'un réel "val" élevé à une 
puissance entière n. 


5.5 à la puissance 12



double puissance(double val   , int  puiss);

*/


#include <stdio.h>
#include <stdlib.h>


double puissance(double val, int  puiss);

double carre(double val)
{

	val = val * val;
	return val;
}



/*
Fonction détermine le minimum et le maximum parmi les trois valeurs
*/
??? min_max(int val1, int val2, int val3)
{

}



int main(void)
{

	double une_valeur;
	//double le_carre; 

	une_valeur = 10;

	//le_carre = carre(une_valeur);

	printf("La valeur de une_valeur est: %lf\n", carre(une_valeur) );


	//printf("%lf\n", puissance(-15, 2) ) ;

	system("pause");
	return EXIT_SUCCESS;
}

double puissance(double val, int  puiss) 
{
	double resultat = 1; 

	for (int i = 1; i<=puiss; i++)
	{
		resultat = resultat * val;
	}

	return resultat;
}

//Calcule le carré d'une valeur val.


