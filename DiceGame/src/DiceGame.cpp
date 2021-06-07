//============================================================================
// Name        : DiceGame.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : No rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Die {
private:
	int faceValue;

public:
	Die(){
		srand(time(NULL));
		roll();
	}

	void roll() {
		faceValue = (rand() % 6) + 1;
		//cout << this << "::Die rolled - " << faceValue << endl;
	}
	int  getFaceValue() {
		return faceValue;
	}
};

class DiceGame {
private:
	Die d1;
	Die d2;

public:
	int play(){
		d1.roll();
		int fv1 = d1.getFaceValue();
		d2.roll();
		int fv2 = d2.getFaceValue();
		return fv1 + fv2;
	}
};

int main() {
	cout << "Hello DiceGame!" << endl;

	DiceGame game;

	int result = game.play();

	if(result == 7){
		cout << "Congrats! You won! (" << result << ")" << endl;
	} else {
		cout << "Sorry! You lose! (" << result << ")" << endl;
	}

	cout << "Running win percentage simulation!" << endl;
	const int times = 1000000;
	int wins = 0;
	for (int i = 0; i < times; i++) {
		if(game.play() == 7)
			wins++;
	}
	cout << " Win percentage after " << times << " times is " << ((float)wins/times)*100 << "%" << endl;

	return 0;
}
