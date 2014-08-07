#include <iostream>
using namespace std;

void printStars(int num, char sym);
void printSpaces(int num);
void printTriangle(int num, char sym);
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
                cout << sym; pwd }
        cout << endl;
}
void printSpaces(int num) {
	int total = num;
        for(int i = num; i > 0; i--) {
		do {
			cout << ' ';
			total--; 
		}while(total > num);
		return; 
	}		
}
void printTriangle(int num, char sym) {
	for(int i = 0; i <= num; i++) {
		printStars(i, sym);
	}
}
void printReverseTriangle(int num, char sym) {
	for(int i = num - 1; i > 0; i--) {
		printSpaces(i);
		printStars(i, sym);
	}
}
