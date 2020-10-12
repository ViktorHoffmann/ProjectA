#include "Neuron.h"
#include "Pseudorandom.h"

Neuron::Neuron(void)
{
}

double Neuron::init_bias(double rand_num_min, double rand_num_max){
	//Initialize Bias as random Numbers
	bias = rand_num(rand_num_min, rand_num_max);
	return 0;
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