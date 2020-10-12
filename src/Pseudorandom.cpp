//
#include <iostream>
//
#include "Pseudorandom.h"

double rand_num(double rand_num_min, double rand_num_max){
    std::random_device re;
    std::mt19937 gen(re());
    std::uniform_real_distribution<double> unif(rand_num_min, rand_num_max);
    return unif(re);
}

//double gaussian_rand(){}