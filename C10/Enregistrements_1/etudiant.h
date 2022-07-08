#ifndef ETUDIANT__H_
#define ETUDIANT__H_

//D�pendances du module
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Constantes associ�es au type �tudiant
#define TAILLE_MAX 100
#define TAILLE_MAX_CODE_PERM 13

//D�finition du type �tudiant: 

/*struct etudiant //D�finir c'est quoi un �tudiant, PAS de cr�er un �tudiant
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

/*
AFFICHER_ETUDIANT
Affiche la fiche descriptive d'un �tudiant
ENTREES: et: pointeur vers un �tudiant
SORTIES: Aucune
*/
void afficher_etudiant(etudiant* et);

/*
*/
double moyenne_etudiant(const etudiant* e);

/*
*/
void saisir_etudiant(etudiant* e);

#endif