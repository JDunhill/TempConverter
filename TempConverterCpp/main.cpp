#include <iostream>
#include <string>
#include <cctype>

double tempConverterC(double tempC) {
	
	// converts Celsius to Fahrenheit
	double tempFoutput = 0.0;
	tempFoutput = (tempC * 1.8) + 32;
	return tempFoutput;
}

double tempConverterF(double tempF) {

	// converts Fahrenheit to Celsius
	double tempCoutput = 0.0;
	double x = 5 / 9;
	tempCoutput = (tempF - 32) * x;
	return tempCoutput;
}


int main() {


	char C, F, choice, again = 'Y';
	
	while (again == 'Y' || again == 'y') {
		
		double tempC, tempF;
		std::cout << "To convert from Celsius to Fahrenheit, press 'C', or to convert from Fahrenheit to Celsius, press 'F': ";
		std::cin >> choice;

		// downcase to standardize all inputs
		choice = std::tolower(choice);

		while ((choice != 'c') && (choice != 'f')) {
			std::cout << "Please type either 'C' or 'F' without the quotation marks: " << "\n";
			std::cin >> choice;
		}

		if (choice == 'c') {
			std::cout << "Please type the temperature in Celsius: ";
			std::cin >> tempC;
			std::cout << "The temperature in Fahrenheit is: " << tempConverterC(tempC) << "\n";
			std::cout << "Convert another temperature? (y/n)" << "\n";
			std::cin >> again;
		}
		else {
			std::cout << "Please type the temperature in Fahrenheit: ";
			std::cin >> tempF;
			std::cout << "The temperature in Celsius is: " << tempConverterF(tempF) << "\n";
			std::cout << "Convert another temperature? (y/n)" << "\n";
			std::cin >> again;
		}

	}
	}

	
