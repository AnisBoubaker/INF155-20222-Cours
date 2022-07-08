#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define TAILLE_MAX 150

void concatener(char chaine1[], const char chaine2[]);

int main(void)
{
	char ma_chaine[TAILLE_MAX];

	char la_copie[TAILLE_MAX];

	char chaine2[TAILLE_MAX];

	printf("Veuillez saisir votre nom: ");
	//scanf("%s", ma_chaine); //Notez: pas de & car ma_chaine est un tableau donc pointeur!

	fgets(ma_chaine, TAILLE_MAX, stdin);
	ma_chaine[strlen(ma_chaine) - 1] = '\0';


	printf("Votre nom est: %s\n", ma_chaine);
	printf("Votre nom contient %d caracteres.\n", strlen(ma_chaine));

	/*int taille_a_copier; 

	taille_a_copier = str_len(ma_chaine);
	for (int i = 0; i <= taille_a_copier; i++)
	{
		la_copie[i] = ma_chaine[i];
	}*/

	//ma_chaine = "Bonjour"; //INTERDIT: On affecte pas un tableau statique à un autre tableau statique

	strncpy(la_copie, ma_chaine, TAILLE_MAX);

	printf("La copie est: %s\n", la_copie);

	strcpy(chaine2, "Bonjour tout le monde!");

	///////////////////////
	char la_destination[TAILLE_MAX] = "INF";
	char a_ajouter[TAILLE_MAX] = "155";


	//concatener(la_destination, a_ajouter);

	strncat(la_destination, a_ajouter,TAILLE_MAX-strlen(la_destination));

	printf("La destination contient: %s\n", la_destination);

	//Sprintf
	int nb = 5; 
	char str[TAILLE_MAX] = "Le nombre de presents est: ";
	char resultat[TAILLE_MAX];

	sprintf(resultat, "%s %d, Merci tout le monde!\n", str, nb);

	printf("%s", resultat);

	//////////// strcmp
	char ch1[TAILLE_MAX] = "Bonjour";
	char ch2[TAILLE_MAX] = "Bonjour";

	int comparaison; 

	comparaison = strcmp(ch1, ch2);

	if (comparaison == 0)
	{
		printf("Les deux chaines sont identiques\n");
	} 
	else if (comparaison > 0)
	{
		printf("%s est plus grande que %s\n", ch1, ch2);
	}
	else //dernier cas: comparaison < 0
	{
		printf("%s est plus petite que %s\n", ch1, ch2);
	}


	//Exercice: 
	//Faire votre propre version de strcmp

	system("pause");
	return 0; 
}

//Écrire la fonction concatener qui concatène deux chaines de caractères.
//La chaine2 est ajoutée à la fin de la première
//Chaine 1 : "Bonjour"
//Chaine 2 : " tout le monde!"
//Après l'appel de la fonction: chaine1 : "Bonjour tout le monde"

void concatener(char chaine1[], const char chaine2[])
{
	int debut  = strlen(chaine1); 
	int i;
	for (i = debut; chaine2[i - debut] != '\0'; i++)
	{
		chaine1[i] = chaine2[i - debut];
	}

	chaine1[i] = '\0';

	//À analyser à la maison: pourquoi ça fonctionne?
	//strcpy(chaine1 + strlen(chaine1), chaine2);
}