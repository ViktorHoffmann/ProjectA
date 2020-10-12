#pragma once

#include <cmath>
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include "Pseudorandom.h"

class Neuron{
public:
	Neuron();
	double init_bias(double rand_num_min, double rand_num_max);
	double get_bias();
	void init_input();
	double Input_value;
	double bias;
	double Activated_value;
	double deriv_Activated_value;
	double sigmoid(double Input_value);
	double deriv_sigmoid(double Input_value);
};