
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


double moyenne_notes(double* tab, int nb_notes);

int main(void)
{

	double* notes = NULL;
	int nb_notes = 0; 
	double moyenne = 0; 

	printf("Combien de notes? ");
	scanf("%d", &nb_notes);

	notes = (double*)malloc(sizeof(double) * nb_notes);

	for (int i = 0; i < nb_notes; i++)
	{
		printf("Saisir la note #%d: ", i + 1);
		scanf("%lf", &notes[i]);
	}

	moyenne = moyenne_notes(notes, nb_notes);

	printf("La moyenne des notes saisies: %lf\n", moyenne);

	system("pause");
	return EXIT_SUCCESS;


}

double moyenne_notes(double* tab, int nb_notes)
{
	double moyenne = 0;
	for (int i = 0; i < nb_notes; i++)
	{
		moyenne += tab[i];
	}
	moyenne = moyenne / nb_notes;
	return moyenne;
}