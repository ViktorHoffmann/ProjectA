#include "Weight.h"
#include <iostream>

Weight::Weight(void)
{
}

void Weight::init_weight(){
	//Initialize Weight as random Numbers
	weight = (rand() % 100 + 1) / 100.0;
}

double Weight::get_weight(){
	return weight;
}