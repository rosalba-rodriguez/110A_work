#include <iostream>
using namespace std;

void check(int inputTen[10]);

int main() {
	int inputTen[10];
	
	cout << "\nPlease enter 10 numbers, hitting return after each one: " << endl;
	
	for(int i = 0; i < 10; i++) {	
		cin >> inputTen[i];
		cout << endl; 
	}

	check(inputTen); 

	return 0; 
}
void check(int inputTen[10]) {
	int output[10];
	int outputPlace = 0; 
	   for(int i = 0; i < 10; i++) {
                int counter = 0;
                for(int a = 0; a < 10; a++) {
                        if(inputTen[i] == inputTen[a]) {
                                counter++;
                        }
                }
                if(counter >= 2) {
                        cout << "element: " << inputTen[i] << endl << "count for element: " << counter << endl;
                        output[outputPlace] = inputTen[i];
                        outputPlace++;
                        cout << "element's place in array: " << outputPlace << endl;
                }
        }
}
