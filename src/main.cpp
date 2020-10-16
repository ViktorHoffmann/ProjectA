#include <iostream>
#include "Neuron.h"
#include "Weight.h"
#include "Pseudorandom.h"

int main() {
	Neuron l[2][4] = {};
	Weight w[1][4][4] = {};


	for (int j = 0; j <= 3; j++)
	{
		for (int i = 0; i <= 3; i++)
		{
			l[0][j].init_bias(0,1,0.5,1);
			l[1][j].init_bias(0,1,0.5,1);
			l[0][j].init_input(0,1);
			w[0][j][i].init_weight(0,1,0.5,1);
		}
	}

	for (int j = 0; j < (sizeof(l[1])/sizeof(l[1][0])); j++)
	{
		for (int i = 0; i < (sizeof(l[0])/sizeof(l[0][0])); i++)
		{
			l[1][j].input_value_ = ((l[0][i].input_value_) * (w[0][i][j].weight_) + (l[1][j].bias_));
			l[1][j].activated_value_ = l[1][j].sigmoid(l[1][j].input_value_);
			l[1][j].deriv_Activated_value_ = l[1][j].deriv_sigmoid(l[1][j].input_value_);
		}
	}
}