#include <iostream>
using namespace std;

int main() {
	int presentYear = 2013; 
	int userYear;
	int userAge;

	cout << "\nWhat year were you born in? ";
	cin >> userYear;

	userAge = presentYear - userYear;

	cout << "\nBy the end of this year, you will be " << userAge << " years old." << endl;

	return 0;
} 
