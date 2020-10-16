#pragma once

#include <cmath>
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include "Pseudorandom.h"

class Neuron{
public:
	Neuron();
	void init_bias(double rand_num_min, double rand_num_max, double rand_num_median, double rand_num_stdevi);
	double get_bias();
	void init_input(double rand_num_min, double rand_num_max);
	double input_value_;
	double bias_;
	double activated_value_;
	double deriv_Activated_value_;
	double sigmoid(double Input_value);
	double deriv_sigmoid(double Input_value);
};