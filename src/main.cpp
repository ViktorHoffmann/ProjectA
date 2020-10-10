#include <iostream>
#include "Neuron.h"
#include "Weight.h"

/*
#include <stdio.h>
#include <time.h>
#include <unistd.h>
*/

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
			l2[j].init_bias();
			w1[j][i].init_weight();
		}
	}
	
	for (int j = 0; j <= 3; j++)
	{
		for (int i = 0; i <= 3; i++)
		{	
			std::cout << "Weight" << "[" << j << "]" << "[" << i << "]" << ": "
			<< w1[j][i].get_weight() << "\n";
		}
		std::cout << "\n";
	}
}