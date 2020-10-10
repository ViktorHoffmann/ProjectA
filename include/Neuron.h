#pragma once
// Class for Neuron object

#include <cmath>

class Neuron{
public:
	Neuron();
	void init_bias();
	double get_bias();
	double Input_value;
	double bias;
	double Activated_value;
	double deriv_Activated_value;

private:
	double sigmoid(double Input_value);
	double deriv_sigmoid(double Input_value);
};