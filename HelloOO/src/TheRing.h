#ifndef THERING_H_
#define THERING_H_

#include <iostream>
#include <string>
using namespace std;

//Singleton
class TheRing {
public:
	void sayit() {
		cout << this <<  " -- My precious!!!!" << endl;
	}

	static TheRing* getInstanceOf(){
		if (instanceOf == 0){
			instanceOf = new TheRing();
		}
		return instanceOf;
	}

private:
	TheRing(){
		cout << "Forging TheRing!(" << this << ")" << endl;
	}
	static TheRing* instanceOf;

};

#endif
