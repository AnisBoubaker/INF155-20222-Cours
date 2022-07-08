#include "etudiant.h"

void afficher_etudiant(const etudiant* et)
{
	printf("FICHE DE L'ETUDIANT:\n");
	printf("--------------------\n");
	printf("Nom: %s\n", (*et).nom);
	printf("Prenom: %s\n", et->prenom);
	printf("Code permanent: %s\n", et->code_perm);
	printf("TP1: %.2lf\n", et->tp1);
	printf("TP2: %.2lf\n", et->tp2);
	printf("Intra: %.2lf\n", et->intra);
	printf("Final: %.2lf\n", et->final);

	//Plus possible puisque et est un pointeur constant
	//strcpy((*et).nom, "Stark");
	//(*et).tp1 = 0;


}


/*
Écrire une fonction: moyenne_etudiant qui calcule et retourne la moyenne d'un-e
etudiant-e. Vous utiliserez les pondérations suivantes:
tp1: 15%
tp2: 15%
Intra: 30%
Final: 40%;
*/

double moyenne_etudiant(const etudiant* e)
{
	double moyenne = 0;
	moyenne += e->tp1 * 0.15;
	moyenne += e->tp2 * 0.15;
	moyenne += e->intra * 0.3;
	moyenne += e->final * 0.4;

	return moyenne;
}

void saisir_etudiant(etudiant* e)
{
	printf("Nom: ");
	fgets(e->nom, TAILLE_MAX, stdin);
	e->nom[strlen(e->nom) - 1] = '\0';

	printf("Prenom: ");
	fgets(e->prenom, TAILLE_MAX, stdin);
	e->prenom[strlen(e->prenom) - 1] = '\0';

	printf("Code permanent: ");
	fgets(e->code_perm, TAILLE_MAX_CODE_PERM, stdin);
	e->code_perm[strlen(e->code_perm) - 1] = '\0';

	printf("TP1: ");
	scanf("%lf", &(e->tp1));

	printf("TP2: ");
	scanf("%lf", &(e->tp2));

	printf("Intra: ");
	scanf("%lf", &(e->intra));

	printf("Final: ");
	scanf("%lf", &(e->final));

}