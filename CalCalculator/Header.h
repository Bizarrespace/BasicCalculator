#ifndef CALCULATOR_H
#define CALCULATOR_H
//Could also just use "pragma once", most modern compilers accept this as the same thing as ifndef

class calculator {
public:
	calculator();
	void run();
	void firstRun(double& result);
	void secondRun(double& result);
	double add(double num1, double num2);
	double subtract(double num1, double num2);
	double divide(double num1, double num2);
	double multiply(double num1, double num2);
};


#endif 
