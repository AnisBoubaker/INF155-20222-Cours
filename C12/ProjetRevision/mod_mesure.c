#include "mod_mesure.h"

t_mesure* mesure_init(void)
{
	t_mesure* nouv_mesure = NULL; 

	nouv_mesure = (t_mesure*)malloc(sizeof(t_mesure));
	//if (nouv_mesure == NULL)
	if(! nouv_mesure)
	{
		return NULL; 
		//printf("Erreur....");
		//exit(EXIT_FAILURE);
	}

	return nouv_mesure;
}

void mesure_liberer(t_mesure* la_mesure)
{
	free(la_mesure);
}