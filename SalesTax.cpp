#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	double stateTax = 0.04;
	double stateTaxCollected;
	double countyTax = 0.02;
	double countyTaxCollected;
	double prodSales;
	double totalIncome;
	double totalTax;
	double totalCollected;
	ofstream outFile;
	char month[11];
	int year;
	
	cout << "\nPlease enter the month for this report: " << endl;
	cin >> month;
	cout << "\nPlease enter the year for this report: " << endl;
	cin >> year;
	cout << "\nPlease enter the total income for this month: " << 
	endl;
	cin >> totalIncome;
	
	prodSales = totalIncome / (1 + (countyTax + stateTax));
	countyTaxCollected = prodSales * countyTax;
	stateTaxCollected = prodSales * stateTax;
	totalCollected = countyTaxCollected + stateTaxCollected;

	outFile.open("SalesTax.txt");
	outFile << "\nMonth: " << setw(9) << month << " " << year << 
	endl;
	outFile << "-----------------------\n";
	outFile << fixed << showpoint << setprecision(2);
	outFile << setiosflags(ios::left) << setw(23) << "Total Collected:" << setw(2) << "$ " << setw(9) << totalCollected << 	endl;
	outFile << setiosflags(ios::left) << setw(23) << "Sales:" << setw(2) << "$ " << setw(9) << prodSales << endl;
	outFile << setiosflags(ios::left) << setw(23) << "County Sales Tax:" << setw(2)<< "$ "  << setw(9) << countyTaxCollected << endl;
	outFile << setiosflags(ios::left) << setw(23) << "State Sales Tax:"  << setw(2)<< "$ "  << setw(9) << stateTaxCollected << endl;
	outFile << setiosflags(ios::left) << setw(23) << "Total Sales Tax:"  << setw(2)<< "$ "  << setw(9) << totalCollected << endl;
	outFile << "-----------------------\n";
	outFile.close();
	cout << "Sales Tax Report Saved to file: SalesTax.txt\n";

	return 0;
}
