#include <iostream>
#include "speak.h"

using namespace std;

Speak :: Speak() {
	i_ = 2;
}

Speak :: Speak(int i) {
	i_ = i;
}

Speak :: ~Speak() {

}

int Speak :: GetI() {
	return i_;
}

void Speak :: SaySomething() {
	cout << "Number : " << GetI() << endl;
}