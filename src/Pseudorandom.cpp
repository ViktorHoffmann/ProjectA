//
#include <iostream>
//
#include "Pseudorandom.h"
bool seeded = false;

double rand_num(double rand_num_min, double rand_num_max){
    if (seeded == false)
    {
        srand (time(NULL));
        seeded = true;
    }
    std::random_device re;
    std::mt19937 gen(re());
    std::uniform_real_distribution<double> unif(rand_num_min, rand_num_max);
    return unif(re);
}

//double gaussian_rand(){}