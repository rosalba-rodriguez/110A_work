//Rodriguez, Rosalba
//Lab 4: Parallelogram Program 
//CS 110A 
#include <iostream>
using namespace std;

void printTriangle(int num, char sym);
void printStars(int num, char sym);
void printReverseTriangle(int num, char sym);

int main() {
	char symbol;
	int sideLength;

	cout << "\nThis program will output a parallelogram." << endl;
	cout << "\nHow long do you want each side to be? ";
	cin >> sideLength;
	cout << "\nPlease enter the character you want it to be made of: ";
	cin >> symbol;
	
	printTriangle(sideLength, symbol);
	printReverseTriangle(sideLength, symbol);

	return 0;
}
void printStars(int num, char sym) {
	for(int i = 0; i < num; i++) {
		cout << sym;
	}
	cout << endl;
}
void printTriangle(int num, char sym) {
	for(int i = 0; i <= num; i++ ) {
		printStars(i, sym);
	}
}
void printReverseTriangle(int num, char sym) {
	for(int numLine = 1; numLine <= num; numLine++) {
		for(int a = 1; a <= numLine; a++) {
			cout << ' ' ;
		}
		for(int b = 1; b <= num - numLine; b++) {
			cout << sym;
		}
		cout << endl;
	}
}
