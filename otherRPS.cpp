#include <iostream>
#include <string>
using namespace std;

int main() {
	char playerOneMove[10];
	char playerTwoMove[10];

	cout << "\nPlayer One, please enter your move: (\'P\' for Paper, \'R\' for Rock, \'S\' for Scissor) "; 
	cin >> playerOneMove;
	cout << "\nPlayer Two, please enter your move: (\'P\' for Paper, \'R\' for Rock, \'S\' for Scissor) ";
	cin >> playerTwoMove;
	
	for(int i = 0; i < strlen(playerOneMove); i++) { 
		if(isupper(playerOneMove[i])) {
			tolower(playerOneMove[i]);
		}
	}
	for(int i = 0; i < strlen(playerTwoMove); i++) {
		if(isupper(playerTwoMove[i])) {
			tolower(playerTwoMove[i]);
		}
	}
	switch(playerOneMove) {
		//if player one is rock(R)
		case 'R':
			//if player two is paper(P)
			if(playerTwoMove == 'P') {
				cout << "\nPlayer 2 wins: Paper covers Rock!" << endl;
			}
			//if player two is paper
			if(playerTwoMove.equals("paper") {
				cout << "\nPlayer 2 wins: Paper covers Rock!" << endl;
			}
	}
	return 0;
} 

