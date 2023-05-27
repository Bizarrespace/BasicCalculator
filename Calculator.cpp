#include "Header.h"
#include <iostream>

calculator::calculator() {
		std::cout << "Welcome to my Calculator\n";
	}

void calculator::run() {
	bool running = true;
	while (running) {
		std::cout << "\nDo you want to add(1), subtrack(2), divide(3), multiply(4) or quit(0)?\n";
		int userInput = 0;
		std::cin >> userInput;
		if (userInput == 0) {
			running = false;
			break;
		}
		double num1, num2;
		std::cout << "Enter 2 numbers: \n";
		std::cin >> num1;
		std::cin >> num2;
		system("cls");

		switch (userInput) {
		case 1:
			std::cout << (add(num1, num2)) << "\n";
			break;

		case 2:
			std::cout << (subtrack(num1, num2)) << "\n";
			break;

		case 3:
			std::cout << (divide(num1, num2)) << "\n";
			break;

		case 4:
			std::cout << (multiply(num1, num2)) << "\n";
			break;

		case 0:
			running = false;
			break;
		}
	}
}

double calculator::add(double num1, double num2) {
	double sum = 0;
	sum = num1 + num2;
	return sum;
}

double calculator::subtrack(double num1, double num2) {
	double sum = 0;
	sum = num1 - num2;
	return sum;
}

double calculator::divide(double num1, double num2) {
	double sum = 0;
	sum = num1 / num2;
	return sum;
}

double calculator::multiply(double num1, double num2) {
	double sum = 0;
	sum = num1 * num2;
	return sum;
}