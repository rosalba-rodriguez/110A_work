//Rodriguez, Rosalba
//De-Dup Lab
//CS 110A
//Notes: when calling proccesArray function, there is a run-time error/infinite looping 
//       I do not know what is wrong. 

#include <iostream> 
using namespace std;

const int SIZE = 10; 

void getValues(int[], int);
void processArray(int x[], int size, int& uniqueNum);
void display(int[], int); 

int main() { 
	int x[SIZE]; 
	int uniqueNum;

	getValues(x, SIZE);
	processArray(x, SIZE, uniqueNum);
	display(x, uniqueNum);

	return 0; 
}
void getValues(int x[], int size) {
	cout << "\nPlease enter 10 integers, hitting return after each one." << endl;
	for(int i = 0; i < size; i++) {
		cin >> x[i];
	}
}
void processArray(int x[], int size, int& uniqueNum) {
	uniqueNum = size;
	for(int i = 0; i < size; i++) {
		for(int j = i+1; j < size; j++) { 
			if(x[i] == x[j]) {
				for(int k = j; k < uniqueNum-1; k++) {
					x[k] = x[k+1];
				}
				uniqueNum--;
				j--;
			}
		}
	}
} 
void display(int x[], int uniqueNum) {
	cout << "\nYou entered " << uniqueNum << " distinct numbers: ";
	for(int i = 0; i < uniqueNum; i++) {
		cout << x[i];
	}
}	
