#ifndef MOD_PROVINCE__H_
#define MOD_PROVINCE__H_

#include <stdlib.h>
#include <string.h>
#include "mod_capteur.h"



typedef struct t_province
{
	char* nom; //Chaine de caract�res (tableau de caract�res) de taille dynamique
	t_capteur** capteurs; //Tableau dynamique de r�f�rences vers des capteurs
	int nb_capteur; //Taille effective du tableau de capteurs
	int max_capteurs; 
} t_province;


t_province* province_init(char* nom);

void province_liberer(t_province* province);

#endif