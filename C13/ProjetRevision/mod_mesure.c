#include "mod_mesure.h"


t_mesure* mesure_init(void)
{
	t_mesure* nouv_mesure = NULL;

	nouv_mesure = (t_mesure*)malloc(sizeof(t_mesure));
	
	return nouv_mesure;
}

void mesure_liberer(t_mesure* mesure)
{
	free(mesure);
}