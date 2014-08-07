#include <iostream>
using namespace std;

int main() {
	double begBalance;
	int checksWritten;
	double monthlyFee = 10.0;
	double totalFees;
	
	cout << "\nEnter the following information about your checking account." << endl;
	cout << "\nBeginning balance: $";
	cin >> begBalance;
	cout << "\nNumber of checks written: ";
	cin >> checksWritten;

	if(begBalance >= 400.00) { 
		if(checksWritten <= 19) {
			totalFees = monthlyFee + (0.10 * checksWritten);
		}
		if(checksWritten >= 20 && checksWritten <= 39) {
			totalFees = monthlyFee + (0.08 * checksWritten);	
		}
		if(checksWritten >= 40 && checksWritten <= 59) {
			totalFees = monthlyFee + (0.06 * checksWritten);
		}
		if(checksWritten >= 60) {
			totalFees = monthlyFee + (0.04 * checksWritten);
		}
		
	}
	if(begBalance <= 399.99) {
		 if(checksWritten <= 19) {
                        totalFees = monthlyFee + (0.10 * checksWritten) + 15.0;
                }
                if(checksWritten >= 20 && checksWritten <= 39) {
                        totalFees = monthlyFee + (0.08 * checksWritten) + 15.0;
                }
                if(checksWritten >= 40 && checksWritten <= 59) {
                        totalFees = monthlyFee + (0.06 * checksWritten) + 15.0;
                }
                if(checksWritten >= 60) {
                        totalFees = monthlyFee + (0.04 * checksWritten) + 15.0;
                }

	}

	cout << "\nThe bank fee this month is $" << totalFees << endl;

	return 0;
} 	
