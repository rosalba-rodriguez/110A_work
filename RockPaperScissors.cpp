#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char playerOneMove;
	char playerTwoMove;
	
	cout << "\nPlayer One, please enter your move: ";
	cout << "(\'P\' for Paper, \'R\' for Rock, \'S\' for Scissors) ";
	cin >> playerOneMove;
	cout << "\nPlayer Two, please enter your move: ";
	cout << "(\'P\' for Paper, \'R\' for Rock, \'S\' for Scissors) ";
	cin >> playerTwoMove;

        //if player one is lowercase, change to uppercase
        if(islower(playerOneMove)) {
                playerOneMove = toupper(playerOneMove);
        }
        //if player two is lowercase, change to uppercase
        if(islower(playerTwoMove)) {
                playerTwoMove = toupper(playerTwoMove);
        }
	switch(playerOneMove) {
		//if player one is rock
		case 'R':
			//if player two is paper (rock vs paper)
			if(playerTwoMove == 'P') {
				cout << "\nPlayer 2 wins: Paper covers Rock!" << endl;
			}
			//if player two is scissors (rock vs scissors)
			else if(playerTwoMove == 'S') {
				cout << "\nPlayer 1 wins: Rock breaks Scissors!" << endl;
			}
			//if player two is rock (rock vs rock)
			else if(playerTwoMove == 'R') {
				cout << "\nTie with Rock!" << endl;
			}
			//if player two enters an invalid move
			else {
				cout << "\nPlayer 2 has entered an invalid move." << endl;
			}
			break;
		//if player one is paper
		case 'P' :
			//if player two is rock (paper vs rock)
			if(playerTwoMove == 'R') {
				cout << "\nPlayer 1 wins: Paper covers Rock!" << endl;
			}
			//if player two is scissors (paper vs scissors)
			else if(playerTwoMove == 'S') {
				cout << "\nPlayer 2 wins: Scissors cuts Paper!" << endl;
			}
			//if player two is paper (paper vs paper)
			else if(playerTwoMove == 'P') {
				cout << "\nTie with Paper!" << endl;
			}
			//if player two entered invalid move
			else {
				cout << "\nPlayer 2 has entered an invalid move." << endl;
			}
			break;
		//if player one is scissors
		case 'S':
			//if player two is rock (scissors vs rock)
			if(playerTwoMove == 'R') {
				cout << "\nPlayer 2 wins: Rock breaks Scissors!" << endl;
			}
			//if player two is paper (scissors vs paper)
			else if(playerTwoMove == 'P') {
				cout << "\nPlayer 1 wins: Scissors cuts Paper!" << endl;
			}
			//if player two is scissors (scissors vs scissors) 
			else if(playerTwoMove == 'S') {
				cout << "\nTie with Scissors!" << endl;
			} 
			//if player two entered invalid move
			else {
				cout << "\nPlayer 2 has entered an invalid move." << endl;
			}
			break;
		default: 
			//if player one enters invalid move
			cout << "\nPlayer 1 has entered an invalid move." << endl; 
			break;
	}
	return 0;
} 
