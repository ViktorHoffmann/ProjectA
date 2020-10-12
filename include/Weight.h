#pragma once
// Class for Weight object

#include <cmath>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Pseudorandom.h"

class Weight{
public:
	Weight();
	double init_weight(double rand_num_min, double rand_num_max);
	double get_weight();
	double weight;

private:
};