#include <stdio.h>
#include <stdlib.h>

#include <string.h>


#define TAILLE_MAX 100

int taille_chaine(char chaine[]);

int main(void)
{
	//Initialisation de la chaine, comme un tableau
	//char ma_chaine[8] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
	//Initialisation de la chaine avec la notation "..."
	char ma_chaine[8] = "Bonjour";

	char chaine2[TAILLE_MAX];

	/* On ne fera pas ça, on va utiliser le code %s de printf
	for (int i = 0; i < 7; i++)
	{
		printf("%c", ma_chaine[i]);
	}*/

	//%s pour afficher une chaine de caractères. 
	printf("%s\n", ma_chaine);

	//Comptez le nombre de caractères de la chaine chaine2
	
	printf("La taille de ma_chaine est: %d\n", taille_chaine(ma_chaine) );


	//strlen: donne la taille d'une chaine de caractères
	//strlen : string length
	printf("La taille de ma_chaine est: %d\n", strlen(ma_chaine));


	/*
	//Equivalent de %s
	for (int i = 0; ma_chaine[i]!='\0'; i++)
	{
		printf("%c", ma_chaine[i]);
	}*/





	system("pause");
	return 0;


	/* RAPPELS SUR LE TYPE CARACTERE*/
	/*char un_char; 


	un_char = 'A'; //Important, ce sont des quotes simples

	printf("Le caractere en tant qu'entier: %d\n", un_char);

	printf("Le caractere en tant que caractere: %c\n", un_char);

	system("pause");
	return 0; */
}

int taille_chaine(char chaine[])
{
	int taille = 0; 
	while (chaine[taille] != '\0')
	{
		taille++;
	}
	return taille; 
}