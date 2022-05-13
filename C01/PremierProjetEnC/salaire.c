/*
En-tête du programme (que fait le programme? 

Date: 
Auteur: 
Version: 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double salaire_horaire; //Salaire horaire de l'employe
	int nb_heures; // Nombre d'heures travaillees
	/*
	Si je veux imposer que le nombre d'heures soit uniquement positif: 
	unsigned int nb_heures;
	*/
	double total; // Salaire à verer
	char un_caractere;

	//Affecter (mettre la valeur) 10 dans la variable nb_heures
	nb_heures = 10;

	//un_caractere = 'a'; 
	un_caractere = 97;


	printf("La variable un_caractere contient: %c\n", un_caractere);



	// Saisie du salaire horaire
	printf("Veuillez entrer le salaire horaire: ");
	scanf("%lf", &salaire_horaire);

	//On saisit le nombre d'heures travaillées
	printf("Veuillez entrer le nombre d'heures de travail: ");
	scanf("%d", &nb_heures);

	//Calcul du salaire à verser
	total = nb_heures * salaire_horaire;

	//On affiche le salaire à verser à l'employé
	printf("Le salaire à verser est: %.2lf\n", total);

	//Attend que l'utilisateur presse sur une touche avant de fermer le programme
	system("pause");
	return EXIT_SUCCESS;

}