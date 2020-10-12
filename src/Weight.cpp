#include "Weight.h"
#include "Pseudorandom.h"

Weight::Weight(void)
{
}

double Weight::init_weight(double rand_num_min, double rand_num_max){
	//Initialize Weight as random Numbers
	weight = rand_num(rand_num_min, rand_num_max);
	return 0;
}

double Weight::get_weight(){
	return weight;
}