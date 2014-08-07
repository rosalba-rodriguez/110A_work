#include <iostream>
using namespace std;

int main() {
	const double BIRTH_RATE = 0.03;
	const double DEATH_RATE = 0.01;
	int jackBorn;
	int jackDead;
	int origJackPop;
	int generations;
	int newJackPop;
	
	cout << "\nHow many jackalopes do you have? ";
	cin >> origJackPop;
	cout << "\nHow many generations do you want to wait? ";
	cin >> generations;

	for(int i = 0; i <= generations; i++) {
		jackBorn = origJackPop * BIRTH_RATE;
		jackDead = origJackPop * DEATH_RATE;
		newJackPop = origJackPop + jackBorn - jackDead;
	}

	if(generations == 1) {	
		cout << "\nIf you start with " << origJackPop << " jackalopes and wait " << generations << " generation," << endl;
		cout << "you'll end up with a total of " << newJackPop << " of them." << endl;	
	}
	else if(generations > 1) {
		cout << "\nIf you start with " << origJackPop << " jackalopes and wait " << generations << " generations," << endl;
		cout << "you'll end up with a total of " << newJackPop << " of them." << endl;
	}

	return 0;
}
