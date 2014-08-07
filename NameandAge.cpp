#include <iostream>
using namespace std;

int main() {
	char name[11];
	int age;
	
	cout << "\nWhat is your name?" << endl;
	cin >> name;
	cout << "\nWhat is your age?" << endl;
	cin >> age;
	
	cout << "\nYour name is " << name << " and you are " << age << " years old." << endl; 

	return 0; 
}  
