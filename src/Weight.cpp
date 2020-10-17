#include "Weight.h"
#include "Pseudorandom.h"

Weight::Weight(void)
{
}

double Weight::init_weight(double rand_num_min, double rand_num_max, double rand_num_median, double rand_num_stdevi){
	weight_ = gaussian_rand(rand_num_min, rand_num_max, rand_num_median, rand_num_stdevi);
	return 0;
}

double Weight::get_weight(){
	return weight_;
}