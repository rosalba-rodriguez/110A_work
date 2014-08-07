#include <iostream>
#include <iomanip> 
using namespace std;

int numEmployees();
int daysMissed(int numEmployed);
float avgNumDaysMissed(int numDaysMissed, int numEmploy);

int main() {
	numEmployees();
	
	return 0;
}
int numEmployees() {
	int numEmploy;
	cout << "\nHow many employees does the company have? ";
	cin >> numEmploy; 
	
	if(numEmploy < 0) {
		cout << "\nThe number of employees must be one or greater. Please re-enter: ";	
		cin >> numEmploy;
	}
	if(numEmploy == 0) {
		cout << "\nThe number of employees must be one or greater. Please re-enter: ";
		cin >> numEmploy; 
	}
	if(numEmploy > 0) {
		daysMissed(numEmploy); 
	}
}
int daysMissed(int numEmployed) {
	int totalDays;
	int input; 
	for(int i = 1; i <= numEmployed; i++) {
		cout << "\nDays missed by employee # " << i << " :";
		cin >> input;
		if(input < 0) {
			cout << "\nDays missed must be zero or greater. Please re-enter: ";
			cin >> input;
			if(input < 0) {
				cout << "\nDays missed must be zero or greater. Please re-enter: ";
				cin >> input;
			}
		}
		if(input >= 0) {
			totalDays += input; 
		}
	}
	avgNumDaysMissed(totalDays, numEmployed);
}
float avgNumDaysMissed(int numDaysMissed, int numEmploy) {
	float avgNumMissed = static_cast <float>(numDaysMissed)/numEmploy;
	cout << "\nThe average number of days missed per employee is " << setprecision(2) << avgNumMissed << endl;
}
