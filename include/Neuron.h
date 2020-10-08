#pragma once

#include <cmath>


// Class for Neuron object

class Neuron{
public:
	double Input_value = NULL;
	double Activated_value = NULL;
	double deriv_Activated_value = NULL;
private:
	double sigmoid(double Input_value){
		return Activated_value = ((1)/(1+exp(-(Input_value))));
	}

	double deriv_sigmoid(double Input_value){
		return deriv_Activated_value = (sigmoid(Input_value)*(1-sigmoid(Input_value)));
	}
};