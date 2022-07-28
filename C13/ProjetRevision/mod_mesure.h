#ifndef MOD_MESURE__H_
#define MOD_MESURE__H_

#include <stdlib.h>
#include <string.h>

typedef enum e_jour_semaine
{
	DIMANCHE, LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI
} e_jour_semaine;


typedef struct t_mesure
{
	e_jour_semaine jour; 
	double temperature; 
	double humidite; 
	double pression; 
} t_mesure;


t_mesure* mesure_init(void);

void mesure_liberer(t_mesure* mesure);

#endif