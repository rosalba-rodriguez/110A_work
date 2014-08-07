pwd//Rodriguez, Rosalba //Palindrome Lab //Notes: When word is not a palindrome, program displays correct 
output
	//When word is palindrome, program displays both yes and no

#include <iostream>
#include <cstring> 
using namespace std;

void checkPalin(char word[], int size);

int main() {
	char word[20];
	int size; 
	
	cout << "\nPlease enter a word: ";
	cin >> word;
	size = strlen(word);
	
	checkPalin(word, size);
	
	return 0;
}
void checkPalin(char word[], int size) {
	for(int i = 0; i < size; i++) {
		if(word[i] != word[size-1]) {
			cout << "\nThe word you entered, \'" << word << "\', is not a palindrome." << endl;
			return; 
		} 
		else if(word[i] == word[size-1]) {
			size--; 
			checkPalin(word, size-1);
			cout << "\nThe word you entered, \'" << word << "\', is a palindrome." << endl;
			return;
		}
	}
}
