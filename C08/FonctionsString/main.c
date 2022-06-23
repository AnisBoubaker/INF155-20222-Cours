#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define TAILLE_MAX 150

int main(void)
{
	char ma_chaine[TAILLE_MAX];

	printf("Veuillez saisir votre nom: ");
	//scanf("%s", ma_chaine); //Notez: pas de & car ma_chaine est un tableau donc pointeur!

	fgets(ma_chaine, TAILLE_MAX, stdin);
	ma_chaine[strlen(ma_chaine) - 1] = '\0';


	printf("Votre nom est: %s\n", ma_chaine);
	printf("Votre nom contient %d caracteres.\n", strlen(ma_chaine));

	system("pause");
	return 0; 
}