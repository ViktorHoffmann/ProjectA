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
		for (int i = 0; i < nLayers; i++)
		{
			int size = 0;
			std::cout << "Layer " << i+1 << " size: ";
			std::cin >> size;
			neuronLayers.push_back(size);
		}
	}
	else
	{
		std::cout << "error: minimum 2 layers required\n";
		return;
	}

	std::cout << "> building network\n...\n";
	
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
			std::cout << "l[" << k << "][" << l << "]: " << l[k][j].get_bias() << "\n";
			if (k < (neuronLayers.size() - 1))
			{
				w[k][j].resize(neuronLayers[k+1]);
			}

			if (k < (neuronLayers.size() - 1))
			{
				for (int i = 0; i < neuronLayers[k+1]; i++)
				{
					w[k][j][i].init_weight(0,1,0.5,1);
					std::cout << "  w[" << k << "][" << j << "][" << i << "]: " << w[k][j][i].get_weight() << "\n";
				}
			}
		}
	}
	
	std::cout << "> network build succesfully\n";
}

/*void feed_network(){
	std::cout << "> feeding network\n...\n";

	double y_est = 0.0;

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

	std::cout << "> estimate calculated\n";
}*/

void calc_error(){
	std::cout << "> calculating error\n...\n";
}

void backprop_network(){}

int main() {
	init_network();
	calc_error();
}
