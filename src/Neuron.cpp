#include "Neuron.h"
#include "Pseudorandom.h"

Neuron::Neuron(void)
{
}

void Neuron::init_bias(double rand_num_min, double rand_num_max, double rand_num_median, double rand_num_stdevi){
	//Initialize Bias as random Numbers
	bias_ = gaussian_rand(rand_num_min, rand_num_max, rand_num_median, rand_num_stdevi);
}

double Neuron::get_bias(){
	return bias_;
}

void Neuron::init_input(double rand_num_min, double rand_num_max){
	input_value_ = rand_num(rand_num_min, rand_num_max);
}

double Neuron::sigmoid(double Input_value){
	return activated_value_ = ((1)/(1+exp(-(Input_value))));
}

double Neuron::deriv_sigmoid(double Input_value){
	return deriv_Activated_value_ = (sigmoid(Input_value)*(1-sigmoid(Input_value)));
}