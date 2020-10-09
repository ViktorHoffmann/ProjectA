#pragma once
// Class for Neuron object

#include <cmath>

class Neuron{
public:
	Neuron();
	
	double sigmoid(double Input_value);
	double deriv_sigmoid(double Input_value);

	double Input_value;
	double Activated_value;
	double deriv_Activated_value;

private:
};