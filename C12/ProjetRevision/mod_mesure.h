#ifndef MOD_MESURE__H_
#define MOD_MESURE__H_


#include <stdlib.h>

//Enumeration des jours de la semaine
typedef enum e_jours_semaine
{
	DIMANCHE, LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI
} e_jours_semaine;

typedef struct t_mesure
{
	e_jours_semaine jour; //0: dimanche ... 6: samedi
	double temperature;
	double humidite;
	double pression;
} t_mesure;


t_mesure* mesure_init(void);

void mesure_liberer(t_mesure* la_mesure);

#endif