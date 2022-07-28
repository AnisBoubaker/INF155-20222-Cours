#ifndef MOD_PROVINCE__H_
#define MOD_PROVINCE__H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mod_capteur.h"

typedef struct t_province {
	char* nom;
	t_capteur** capteurs; //Tableau 1D de références (pointeurs) vers des capteurs  
	int max_capteurs; 
	int nb_capteurs; 
} t_province;


t_province* province_init(char* nom, int nb_max_capteurs);


void province_liberer(t_province* prov);


void afficher_province(const t_province* prov);


#endif