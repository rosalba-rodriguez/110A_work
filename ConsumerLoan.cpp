#include <iostream>
using namespace std;

void greeting();
void getBorrowAmount();
void getInterestRate();
void getMonthlyPayment();
void ending();

int main() {
	greeting();
	getBorrowAmount();
	getInterestRate();
	getMonthlyPayment();
	ending();

	return 0;
}
void greeting() {
	cout << "\n**Welcome to the Consumer Loan Calculator **" << endl << endl;
}
void getBorrowAmount() {
	double borrowAmount;
	
	cout << "\nHow much do you want to borrow? $";
	cin >> borrowAmount;
	if(borrowAmount <= 0) {
		cout << "\nYou must enter a positive number!" << endl;
		getBorrowAmount();
	}
}
void getInterestRate() {
	double interestRate;
	double monthlyInterest;

	cout << "\nWhat is the annual interst rate expressed as a percent? ";
	cin >> interestRate;
	if(interestRate <= 0) {
		cout << "\nYou must enter a positive number!" << endl;
		getInterestRate();
	}
	else {
		monthlyInterest = (interestRate/12) * 0.01; 
	}
}
void getMonthlyPayment() {
	double monthlyPayment;

	cout << "\nWhat is the monthly payment amount? $";
	cin >> monthlyPayment;
	if(monthlyPayment <= 0) {
		cout << "\nYou must enter a positive number!" << endl;
		getMonthlyPayment();
	} 
} 
void ending() {
	cout << "\n** Don't get too overwhelmed with debt! ** " << endl;
}
