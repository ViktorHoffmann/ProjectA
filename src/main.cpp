#include <iostream>
#include <vector>
#include "Header.h"
#include "Neuron.h"
#include "Weight.h"
#include "Pseudorandom.h"

void init_network(){
	/*
	build and initialize network to 
	user set size and fill random
	values to weights and biases.
	*/

	int nLayers = 0;						//user specified layer ammount
	std::vector<int> neuronLayers = {};		//input vector

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
		return;
	}

	//set the size of the Neuron and Weight vectors according to the input vector
	std::cout << "> building network...\n";
	
	//reset vectors
	l.clear();
	w.clear();

	l.resize(neuronLayers.size(), std::vector<Neuron>(0));
	w.resize((neuronLayers.size() - 1), std::vector<std::vector<Weight>>(0, std::vector<Weight>(0)));

	for (int k = 0; k < neuronLayers.size(); k++)
	{
		l[k].resize(neuronLayers[k]);
		if (k < (neuronLayers.size() - 1))
		{
			w[k].resize(neuronLayers[k], std::vector<Weight>(0));
		}

		for (int j = 0; j < neuronLayers[k]; j++)
		{
			l[k][j].init_bias(0,1,0.5,1);
			if (k < (neuronLayers.size() - 1))
			{
				w[k][j].resize(neuronLayers[k+1]);
			}

			if (k < (neuronLayers.size() - 1))
			{
				for (int i = 0; i < neuronLayers[k+1]; i++)
				{
					w[k][j][i].init_weight(0,1,0.5,1);
				}
			}
		}
	}
	

















	/*
	for (int k = 0; k < neuronLayers.size(); k++)//layer iterator
	{
		for (int j = 0; j < neuronLayers[k]/*start-layer size*; j++)
		{
			//neuron initialization
			l.resize(neuronLayers.size(),std::vector<Neuron>(neuronLayers[k]));
			l[k][j].init_bias(0,1,0.5,1);
			
			
			std::cout << "l[" << k << "][" << j << "]: " << l[k][j].get_bias() << "\n";


			if (k != (neuronLayers.size() - 1))//if not last layer: build weights
			{
				for (int i = 0; i < neuronLayers[k+1]/*end-layer size*; i++)
				{
					//weight initialization
					w.resize(neuronLayers.size(), std::vector<std::vector<Weight>>(neuronLayers[k], std::vector<Weight>(neuronLayers[k+1])));
					w[k][j][i].init_weight(0,1,0.5,1);


					std::cout << "w[" << k << "][" << j << "][" << i << "]: " << w[k][j][i].get_weight() << "\n";


				}
			}
		}
	}
	*/
	std::cout << "> network build succesfully\n";
}

int main() {
	init_network();
	/*
	std::cout << "> calculating error\n";
	for (int k = 0; k < count; k++)
	{
		for (int j = 0; j < count; j++)
		{
			for (int i = 0; i < count; i++)
			{
				l[j][i].input_value_ = ((l[j][i].input_value_) * (w[k][i][j].weight_) + (l[j][i].bias_));
				l[j][i].activated_value_ = l[j][i].sigmoid(l[j][i].input_value_);
				l[j][i].deriv_Activated_value_ = l[j][i].deriv_sigmoid(l[j][i].input_value_);
			}
		}
	}

	std::cout << "> error: " <<
	*/
}