#include <iostream>
using namespace std;
	
int main() {
	char userChoice;
 	cout << "\nIs Daniela a loser? Enter \'Y\' or \'N\'." << endl;
	cin >> userChoice;
	
	if(userChoice == 'Y') {
		cout << "Yay!. I knew it all along. Thank you!" << endl;
	}
	if(userChoice == 'N') {
		cout << "Liar, you know she is." << endl;
	}
	return 0;
} 
