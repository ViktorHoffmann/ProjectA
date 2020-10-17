#include <iostream>
#include <vector>
#include "Neuron.h"
#include "Weight.h"
#include "Pseudorandom.h"

int main() {
	int nLayers = 0;
	std::vector<int> neuronLayers = {};

	std::cout << "Number of layers: ";
	std::cin >> nLayers;
	std::cout << "\n";

	if (nLayers >= 2)
	{
		//if atleast 2 layers are specified the size of those layers is set
		for (int i = 0; i < nLayers; i++)
		{
			int size = 0;
			std::cout << "Layer " << i+1 << " size: ";
			std::cin >> size;
			std::cout << "\n";
			neuronLayers.push_back(size);
		}
	}
	else
	{
		std::cout << "error: minimum 2 layers required\n";
		return 1;
	}
	
	std::vector<std::vector<Neuron>> l;
	std::vector<std::vector<std::vector<Weight>>> w;

	//set the size of the Neuron and Weight vectors according to the input vector
	std::cout << "> building network...\n";

	for (int k = 0; k < neuronLayers.size(); k++)//layer iterator
	{
		for (int j = 0; j < neuronLayers[k]/*start-layer size*/; j++)
		{
			//neuron initialization
			l.resize(neuronLayers.size(),std::vector<Neuron>(neuronLayers[k]));
			l[k][j].init_bias(0,1,0.5,1);
			if (neuronLayers[k] != neuronLayers.size())//if not last layer: build weights
			{
				for (int i = 0; i < neuronLayers[k+1]/*end-layer size*/; i++)
				{
					//weight initialization
					w.resize(neuronLayers.size(), std::vector<std::vector<Weight>>(neuronLayers[k], std::vector<Weight>(neuronLayers[k+1])));
					w[k][j][i].init_weight(0,1,0.5,1);
				}
			}
		}
	}

	std::cout << "> network build succesfully\n";

	/*
	for (int j = 0; j < (sizeof(l[1])/sizeof(l[1][0])); j++)
	{
		for (int i = 0; i < (sizeof(l[0])/sizeof(l[0][0])); i++)
		{
			l[1][j].input_value_ = ((l[0][i].input_value_) * (w[0][i][j].weight_) + (l[1][j].bias_));
			l[1][j].activated_value_ = l[1][j].sigmoid(l[1][j].input_value_);
			l[1][j].deriv_Activated_value_ = l[1][j].deriv_sigmoid(l[1][j].input_value_);
		}
	}
	*/
}