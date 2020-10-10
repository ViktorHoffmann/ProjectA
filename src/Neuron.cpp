#include "Neuron.h"
#include <iostream>
#include <cstdio>

Neuron::Neuron(void)
{
}

void Neuron::init_bias(){
	//Initialize Bias as random Numbers
	bias = (rand() % 100 + 1) / 100.0;
}

double Neuron::get_bias(){
	return bias;
}

void Neuron::init_input(){
	Input_value = (rand() % 100 + 1) / 100.0;
}

double Neuron::sigmoid(double Input_value){
	return Activated_value = ((1)/(1+exp(-(Input_value))));
}

double Neuron::deriv_sigmoid(double Input_value){
	return deriv_Activated_value = (sigmoid(Input_value)*(1-sigmoid(Input_value)));
}