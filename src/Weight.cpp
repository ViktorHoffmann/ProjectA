#include "Weight.h"

Weight::Weight(void)
{
	//Initialize Weight as random Numbers
	srand (time(NULL));
	weight = ((1)/(1+exp(-(rand() % 100 + 1))));
}