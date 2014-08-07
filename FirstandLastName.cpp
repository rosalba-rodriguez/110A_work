#include <iostream>
using namespace std;

int main() {
	string userFirstName;
	string userLastName;

	cout << "\nWhat is your first name?" << endl;
	cin >> userFirstName;
	cout << "\nWhat is your last name?" << endl;
	cin >> userLastName;
	cout << "\nHi " << userFirstName << " " << userLastName << "!";
	cout << "\nI hope you have a good day." << endl; 

	return 0;
} 
