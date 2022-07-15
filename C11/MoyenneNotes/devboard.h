#ifndef DEVBOARD__H_
#define DEVBOARD__H_

typedef struct devboard
{
	int architecture; //0: ESP, 1: Atmel, 2: Motorola
	int nb_pins; 
	char num_serie[20];
} devboard;



#endif