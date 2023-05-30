#include "Header.h"
#include <iostream>

calculator::calculator() {
		std::cout << "Welcome to my Calculator\n";
	}

void calculator::run() {
	bool running = true;
	double result = 0;
	while (running) {
		std::cout << "\n" << result;
		firstRun(result);
	}
}


//Helper functions
void calculator::firstRun(double& result) {
	std::cout << "\nDo you want to add(1), subtrack(2), divide(3), multiply(4) or quit(0)?\n";
	int userInput = 0;
	while (!(std::cin >> userInput) || (userInput < 0 || userInput >4)) {
		std::cout << "Please input a proper choice \n";
	}
	if (userInput == 0) {
		exit(0);
	}

	double num1, num2;
	std::cout << "Enter 2 numbers: \n";
	std::cin >> num1;
	std::cin >> num2;
	system("cls");

	switch (userInput) {
	case 1:
		result = add(num1, num2);
		break;

	case 2:
		result = subtract(num1, num2);
		break;

	case 3:
		result = divide(num1, num2);
		break;

	case 4:
		result = multiply(num1, num2);
		break;

	case 0:
		exit(0);
	}
	std::cout << result << "\n";
	secondRun(result);
}

void calculator::secondRun(double& result) {
	while (true) {
		std::cout << "\nDo you want to add(1), subtrack(2), divide(3), multiply(4), clear(5) or quit(0)?\n";
		int userInput = 0;
		while (!(std::cin >> userInput) || (userInput < 0 || userInput >5)) {
			std::cout << "Please input a proper choice \n";
		}

		if (userInput == 5) {
			run();
		}
		else if (userInput == 0) {
			exit(0);
		}

		double num2;
		std::cout << "Enter a number: ";
		std::cin >> num2;
		system("cls");

		switch (userInput) {
		case 1:
			result = add(result, num2);
			break;
		case 2:
			result = subtract(result, num2);
			break;
		case 3:
			result = divide(result, num2);
			break;
		case 4:
			result = multiply(result, num2);
			break;
		case 0:
			exit(0);
		}
		std::cout << result << "\n";
	}
}

double calculator::add(double num1, double num2) {
	return num1 + num2;
}

double calculator::subtract(double num1, double num2) {
	return num1 - num2;
}

double calculator::divide(double num1, double num2) {
	return num1 / num2;
}

double calculator::multiply(double num1, double num2) {
	return num1 * num2;
}