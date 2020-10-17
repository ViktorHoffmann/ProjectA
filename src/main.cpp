#include <iostream>
#include <vector>
#include "Neuron.h"
#include "Weight.h"
#include "Pseudorandom.h"

int main() {
	int nLayers = 0;
	std::vector<int> sizeLayers = {};

	std::cout << "Number of layers: ";
	std::cin >> nLayers;
	std::cout << "\n";

	if (nLayers >= 2)
	{
		//if atleast 2 layers are specified the size of those layers is set
		for (int i = 0; i < nLayers; i++)
		{
			int size = 0;
			std::cout << "Layer " << i << " size: ";
			std::cin >> size;
			std::cout << "\n";
			sizeLayers.push_back(size);
		}
	}
	else
	{
		std::cout << "error: minimum 2 layers required\n";
		return 1;
	}
	
	//set the size of the Neuron and Weight vectors according to the input vector
	std::vector<std::vector<Neuron>>
	l(0, std::vector<Neuron>(0));
	
	std::vector<std::vector<std::vector<Weight>>>
	w(0, std::vector<std::vector<Weight>>(0, std::vector<Weight>(0)));

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