#include <iostream>
#include "Neuron.h"
#include "Weight.h"

int main() {
	srand (time(NULL));

	Neuron l1 [4] = {};
	Weight w1 [4][4] = {{},{},{},{}};
	Neuron l2 [4] = {};

	for (int j = 0; j <= 3; j++)
	{
		for (int i = 0; i <= 3; i++)
		{
			l1[j].init_bias();
			l1[j].init_input();

			w1[j][i].init_weight();
			
			l2[j].init_bias();
		}
	}

	for (int j = 0; j < (sizeof(l1)/sizeof(l1[0])); j++)
	{
		for (int i = 0; i < (sizeof(l2)/sizeof(l2[0])); i++)
		{
			l2[j].Input_value = ((l1[i].Input_value) * (w1[i][j].weight) + (l2[j].bias));
		}
	}
}