#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define TAILLE_MAX 100
#define TAILLE_MAX_CODE_PERM 13

/*struct etudiant //Définir c'est quoi un étudiant, PAS de créer un étudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_MAX_CODE_PERM];
	double intra; 
	double final; 
	double tp1;
	double tp2;
}; //Ne pas oublier le ; 

//Renomme le type struct etudiant en etudiant
typedef struct etudiant etudiant; */

typedef struct etudiant 
{
	char nom[TAILLE_MAX]; //100 octets (TAILLE_MAX * 1)
	char prenom[TAILLE_MAX]; //100 octets
	char code_perm[TAILLE_MAX_CODE_PERM]; //13 octets
	double intra; //8 octets
	double final; //8 octets
	double tp1; //8 octets
	double tp2; //8 octets
} etudiant;

typedef struct point3d
{
	double x; 
	double y; 
	double z; 
} point3d;


//Déclarations de fonctions
void afficher_etudiant(etudiant* et); 

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

	printf("La note de etudiant 1 au TP1 est: %.2lf\n", etudiant1.tp1);
	printf("Le nom de etudiant 1 est: %s\n", etudiant1.nom);

	system("pause");

	return 0;
}


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