#include <iostream>
#include "Neuron.h"
#include "Weight.h"
#include "Pseudorandom.h"

int main() {
	Neuron l1 [4] = {};
	Weight w1 [4][4] = {{},{},{},{}};
	Neuron l2 [4] = {};

	for (int j = 0; j <= 3; j++)
	{
		for (int i = 0; i <= 3; i++)
		{
			l1[j].init_bias(0, 1);
			l1[j].init_input();
			w1[j][i].init_weight(0, 1);
			l2[j].init_bias(0, 1);
		}
	}

	for (int j = 0; j < (sizeof(l2)/sizeof(l2[0])); j++)
	{
		for (int i = 0; i < (sizeof(l1)/sizeof(l1[0])); i++)
		{
			l2[j].Input_value = ((l1[i].Input_value) * (w1[i][j].weight) + (l2[j].bias));
			l2[j].Activated_value = l2[j].sigmoid(l2[j].Input_value);
			l2[j].deriv_Activated_value = l2[j].deriv_sigmoid(l2[j].Input_value);
		}
	}

	std::cout << "Layer1 Neuron1 input: " << l1[0].Input_value << "\n";
	std::cout << "Layer1 Neuron2 input: " << l1[1].Input_value << "\n";
	std::cout << "Layer1 Neuron3 input: " << l1[2].Input_value << "\n";
	std::cout << "Layer1 Neuron4 input: " << l1[3].Input_value << "\n\n";

	std::cout << "Layer2 Neuron1 bias: " << l2[0].bias << "\n";
	std::cout << "Layer2 Neuron2 bias: " << l2[1].bias << "\n";
	std::cout << "Layer2 Neuron3 bias: " << l2[2].bias << "\n";
	std::cout << "Layer2 Neuron4 bias: " << l2[3].bias << "\n\n";

	std::cout << "Layer2 Neuron1 output: " << l2[0].Input_value << "\n";
	std::cout << "Layer2 Neuron2 output: " << l2[1].Input_value << "\n";
	std::cout << "Layer2 Neuron3 output: " << l2[2].Input_value << "\n";
	std::cout << "Layer2 Neuron4 output: " << l2[3].Input_value << "\n\n";
}