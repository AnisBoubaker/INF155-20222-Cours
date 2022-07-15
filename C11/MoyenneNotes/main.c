
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


double moyenne_notes(double* tab, int nb_notes);

int main(void)
{
	double notes_statique[50] = { 0 };

	double* notes = NULL;
	int nb_notes = 0; 
	int nouveau_nb_notes = 0;
	double moyenne = 0; 

	printf("Combien de notes? ");
	scanf("%d", &nb_notes);

	//notes = (double*)malloc(nb_notes * sizeof(double));
	notes = (double*)calloc(nb_notes, sizeof(double) );
	if (notes == NULL) //V�rification de l'allocation 
	{
		printf("Plus de m�moire!!\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < nb_notes; i++)
	{
		printf("Saisir la note #%d: ", i + 1);
		scanf("%lf", &notes[i]);
	}

	moyenne = moyenne_notes(notes, nb_notes);
	printf("La moyenne des notes saisies: %lf\n", moyenne);


	printf("Maintenant, combien de notes? ");
	scanf("%d", &nouveau_nb_notes);

	//Aggrandir le tableau allou� initialement avec malloc/calloc
	double* nouvelle_adr;
	nouvelle_adr = realloc(notes, nouveau_nb_notes * sizeof(double));
	if (nouvelle_adr == NULL)
	{
		printf("Plus de m�moire! Recommencez...");
	}
	else
	{
		notes = nouvelle_adr;
	}



	//Plus besoin de l'espace m�moire allou� avec malloc, on le lib�re...
	free(notes);

	/*
	Autres traitement ben importants
	
	*/

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