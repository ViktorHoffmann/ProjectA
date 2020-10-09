#include "Neuron.h"

Neuron::Neuron(void)
{
	double Input_value = 0;
}

double Neuron::sigmoid(double Input_value){
	return Activated_value = ((1)/(1+exp(-(Input_value))));
}

double Neuron::deriv_sigmoid(double Input_value){
	return deriv_Activated_value = (sigmoid(Input_value)*(1-sigmoid(Input_value)));
}