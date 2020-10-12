//
#include <iostream>
//
#include "Pseudorandom.h"
std::random_device re;
std::mt19937 gen(re());

double rand_num(double rand_num_min, double rand_num_max){
    //Takes the minimum and maximum values for the interval to generate
    //pseudorandom values with the uniform real distribution
    if (rand_num_min < rand_num_max)
    {
        std::uniform_real_distribution<double> uniform_real_distr(rand_num_min, rand_num_max);
        return uniform_real_distr(re);
    }
    else
    {
        std::cout << "error: unaccaptable range set\n";
        return 1;
    }
}

double gaussian_rand(double rand_num_min, double rand_num_max, double rand_num_median, double rand_num_stdevi){
    //Takes the median and standard deviation to generate pseudorandom values
    //with a normal distribution and then modifies them to fit the given range
    if (rand_num_min < rand_num_max)
    {
        std::normal_distribution<double> normal_distr(rand_num_median, rand_num_stdevi);
        return (rand_num_min)+((rand_num_max - rand_num_min)/(1 + exp(-1 * (normal_distr(re) - 0))));
    }
    else
    {
        std::cout << "error: unaccaptable range set\n";
        return 1;
    }
    
}