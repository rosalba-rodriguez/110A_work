#include <iostream>
using namespace std;

int main() {
	int userInputLength;
	char* muniLine = new char[80]; 
	int surveyLength;
	int numRidersCounted;
	double avgDailyRiders;

	cout << "\nWelcome to the Muni Ridership Calculator." << endl;
	cout << "\nWhich Muni line did you survey? ";
	cin >> muniLine;

	cout << "\nHow many days did you survey it? ";
	cin >> surveyLength;

	cout << "\nHow many people riders did you count? ";
	cin >> numRidersCounted;

	avgDailyRiders = static_cast 
	<double>(numRidersCounted)/surveyLength;

	cout << "\nAccording to your survey, an average of " << 
	avgDailyRiders << " people rode the " << muniLine << " per day." 
	<< endl;

	return 0;
} 
