//Rosalba Rodriguez, Practice Problem 3: Miles per Gallon
//Calculate number of miles per gallon

#include <iostream>
using namespace std;

int main() {
	int gallons = 12;
	int miles = 350;
	double milesPerGallon;

	milesPerGallon = static_cast<double>(miles)/gallons;
	
	cout << "This car gets " << milesPerGallon << " miles per gallon." << endl;
	
	return 0;
} 
