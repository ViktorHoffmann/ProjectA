#pragma once

#include <vector>
#include "Neuron.h"
#include "Weight.h"

void init_network();
std::vector<std::vector<Neuron>> l;					//Neuron 2d vector
std::vector<std::vector<std::vector<Weight>>> w;	//Weight 3d vector