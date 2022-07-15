#ifndef DEVBOARD__H_
#define DEVBOARD__H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct devboard
{
	int type_architecture; //0: ESP, 1: Atmel, 2: Motorola
	int nb_io_pins;
	char num_serie[20];
} devboard;


devboard* devboard_init(void);


void devboard_afficher(const devboard* board);



#endif