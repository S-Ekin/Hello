#include <iostream>
#include "calc.h"

double StaticMath::add(double a, double b){
	std::cout << "SEkin" << std::endl;
	return a + b;
};



double StaticMath::sub(double a, double b){
	return a - b;
};
double StaticMath::mul(double a, double b){
	return a * b;
};
double StaticMath::div(double a, double b){
	if(b == 0){
	    return 0;
	}
	return a / b;
};
