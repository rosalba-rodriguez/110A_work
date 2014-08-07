#include <iostream>
using namespace std;

void greeting();
void getBorrow(double& borrow);
void getIntRate(double& intRate);
void getMonthPay(double& payment);
void payLoan(double borrow, double intRate, double payment, int& months, double& totalInt, double& finalPay);
void ending();

int main() {
	double borrow;
	double intRate;
	double payment;
	int months;
	double totalInt;
	double finalPay;
	
	greeting();
	getBorrow(borrow);
	getIntRate(intRate);
	getMonthPay(payment);
	payLoan(borrow, intRate, payment, months, totalInt, finalPay);
	ending();

	return 0;
}
void greeting() {
	cout << "\n** Welcome to the Consumer Loan Calculator **" << endl;
} 
void ending() {
	cout << "\n** Don't get too overwhelmed with debt! **" << endl;
}
void getBorrow(double& borrow) {
	cout << "\nHow much do you want to borrow? $";
	cin >> borrow;
	if(borrow <= 0) {
		cout << "\nYou must enter a positive number!";
		getBorrow(borrow);
	}
}
void getIntRate(double& intRate) {
	cout << "\nWhat is the annual interest rate expressed as a percent? ";
	cin >> intRate;
	if(intRate <= 0) {
		cout << "\nYou must enter a positive number!";
		getIntRate(intRate);
	}
	else {
		intRate = (intRate/12) * 0.01;
	}
}
void getMonthPay(double& payment) {
	cout << "\nWhat is the monthly payment amount? $";
	cin >> payment;
	if(payment <= 0) {
		cout << "\nYou must enter a positive number!" << endl;
		getMonthPay(payment);
	}
}
void payLoan(double borrow, double intRate, double payment, 
int& months, double& totalInt, double& finalPay) {
	finalPay = 0;
	months = 0;
	totalInt = 0;
	double monthInterest = (intRate/12) * 0.01; 
	double balance = borrow; 
	do {
		borrow += monthInterest;
		totalInt += monthInterest;
		balance = borrow - payment;
		months++;
	}
	while(balance > payment);
	
	cout << "\nYour debt will be paid off after " << months << " months, with a final payment of " << balance;
	cout << "\nThe total amount of interest you will pay during this time is " << totalInt << endl;
} 

