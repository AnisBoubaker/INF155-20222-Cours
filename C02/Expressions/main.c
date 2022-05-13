
#define _CRT_SECURE_NO_WARNINGS //Pour le scanf, toujours le mettre au dessus de #include
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double nombre_groupes;

	int nb_etudiants = 10;
	int nb_par_groupe = 3;
	int nombre_sans_amis;

	int saisie; 

	int numerateur; 
	int denumerateur; 
	double resultat_division;



	nombre_groupes = nb_etudiants / nb_par_groupe;

	nombre_sans_amis = nb_etudiants % nb_par_groupe;

	printf("Le nombre de groupes: %lf \n", nombre_groupes);
	printf("Nombre d'étudiants orphelins: %d\n", nombre_sans_amis);

	//Comprendre le ++
	printf("Saisir une valeur: ");
	scanf("%d", &saisie);

	++saisie;
	printf("La nouvelle valeur de saisie: %d\n", saisie);

	//Calculatrice de divisions
	printf("Numerateur: ");
	scanf("%d", &numerateur);

	printf("Denumerateur: ");
	scanf("%d", &denumerateur);

	resultat_division = (double)(++numerateur) / denumerateur;

	printf("Le resultat est: %lf\n", resultat_division);
	printf("Le numerateur vaut : %d\n", numerateur);


	system("pause");
	return EXIT_SUCCESS;

}
