#include <iostream>
using namespace std;

int main() {
	const double BIRTH_RATE = 0.03;
	const double DEATH_RATE = 0.01;
	int origJackPop;
	int generations;
	int newJackPop;
	
	cout << "\nHow many jackalopes do you have? ";
	cin >> origJackPop;
	cout << "\nHow many generations do you want to wait? ";
	cin >> generations;
	
	newJackPop = getPopulation(origJackPop, generations);
	cout << "\nThe new population is " << newJackPop << " ." << endl;
	
	return 0;
}
int getPopulation(int origPop, int gen) {
	int jackBorn;
	int jackDead;
	origJackPop = origPop;
	generations = gen;
	int a = newJackPop;

	for(int i = 0; i <= gen; i++) {
		jackBorn = origPop * BIRTH_RATE;
		jackDead = origPop * DEATH_RATE;
		a = origPop + jackBorn - jackDead;
		return (a);
	}
}



