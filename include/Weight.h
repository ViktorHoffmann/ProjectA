#pragma once
// Class for Weight object

#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Weight{
public:
	double input_value = NULL;
private:
	double weight = NULL;
};

Weight::Weight(void){
	//Initialize Weight as random Numbers
	srand (time(NULL));
	weight = ((1)/(1+exp(-(rand() % 100 + 1))));
}