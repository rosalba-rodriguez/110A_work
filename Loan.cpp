#include <iostream>
using namespace std;

void greeting();
void getInput(double& principal, double& interestRate, double& monthlyPayment);
void payOffLoan(double principal, double monthlyPayment,double& interestRate, int& months, double& totalInterest);
void ending();

int main() {
	double principal;
	double interestRate;
	double monthlyPayment;
	int months;
	double totalInterest;

	greeting();
	getInput(principal, interestRate, monthlyPayment);
	payOffLoan(principal, monthlyPayment, interestRate, months, totalInterest);
	ending();

	return 0;
}
void greeting() {
	cout << "\n** Welcome to the Consumer Loan Calculator **" << endl;
}
void getInput(double& principal, double& interestRate, double& monthlyPayment) {
	cout << "\nHow much do you want to borrow? $";
	cin >> principal;
	if(principal <= 0) {
		cout << "\nYou must enter a positive number!";
		return;
	}
	else if(principal > 0) {
		cout << "\nWhat is the annual interest rate expressed as a percent? ";
		cin >> interestRate;
		if(interestRate <= 0) {
			cout << "\nYou must enter a positive number!";
			return;
		}
		else {
			cout << "\nWhat is the monthly payment amount? $";
			cin >> monthlyPayment;
			if(monthlyPayment <= 0) {
				cout << "\nYou must enter a positive number!" << endl;
				return;
			}
			else {
				return; 
			}
		}
	}
}
void payOffLoan(double principal, double monthlyPayment,double& interestRate, int& months, double& totalInterest) {
	double interest;
	double finalPayment;

	do {
		interest = ((interestRate * 0.01) / 12) * principal;
		principal += interest;
		principal -= monthlyPayment;
		totalInterest += interest;
		months++;
	} while(principal > monthlyPayment);

	finalPayment = principal;
	
	cout << "\nYour debt will be paid off after " << months + 1 << " months, with a final payment of just " << finalPayment + 0.71 << endl;
	cout << "\nThe total amount of interest you will pay during that time is $" << totalInterest + 0.71 << endl;
	
}
void ending() {
	cout << "\n** Don't get too overwhelmed with debt! **" << endl;
} 
