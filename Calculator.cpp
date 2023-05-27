#include "Header.h"
#include <iostream>

calculator::calculator() {
		std::cout << "Welcome to my Calculator\n";
	}

void calculator::run() {
	bool running = true;
	bool firstRun = true;
	double result = 0;

	while (running) {
		std::cout << "\nDo you want to add(1), subtrack(2), divide(3), multiply(4) or quit(0)?\n";
		int userInput = 0;
		std::cin >> userInput;
		if (userInput == 0) {
			running = false;
			break;
		}
		if (firstRun == true) {
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
				running = false;
				break;
			}
			firstRun = false;
			std::cout << result << "\n";
		}
		else {
			double num2;
			std::cout << "Enter a number: \n";
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
				running = false;
				break;
			}
			std::cout << result << "\n";
		}
	}
}


//Helper functions
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