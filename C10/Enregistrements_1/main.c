#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "etudiant.h"


typedef struct point3d
{
	double x; 
	double y; 
	double z; 
} point3d;




int main(void)
{
	int un_entier; 
	etudiant etudiant1; 
	struct etudiant etudiant2; //Contrairement aux tableaux, un enregistrement n'est pas un pointeur
	etudiant etudiant3;

	point3d un_point; 

	etudiant classe[60] ;


	printf("La taille en memoire de etudiant1 est: %d\n", sizeof(etudiant1));

	printf("La taille en memoire du type etudiant est: %d\n", sizeof(etudiant));

	printf("La taille en memoire du type int est: %d\n", sizeof(int));


	//Accès aux champs d'un étudiant:

	//Jean Valjean

	etudiant1.tp1 = 70;  //Le point permet d'accéder à un champs de l'enregistrement
	etudiant1.tp2 = 90; 
	etudiant1.intra = 85; 
	etudiant1.final = 89;
	strcpy(etudiant1.prenom, "Jean");
	strcpy(etudiant1.nom, "Valjean");
	strcpy(etudiant1.code_perm, "VALJ45567612");


	afficher_etudiant(&etudiant1);

	printf("La moyenne de %s %s est: %.2lf\n", 
		etudiant1.prenom, 
		etudiant1.nom, 
		moyenne_etudiant(&etudiant1));

	saisir_etudiant(&etudiant2);
	afficher_etudiant(&etudiant2);
	printf("La moyenne de %s %s est: %.2lf\n",
		etudiant2.prenom,
		etudiant2.nom,
		moyenne_etudiant(&etudiant2));

	system("pause");

	return 0;
}

