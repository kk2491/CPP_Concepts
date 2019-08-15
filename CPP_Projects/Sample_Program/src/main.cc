#include <iostream>
#include "speak.h"

using namespace std;

int main(int argc, char** argv) {

	int return_value;

	Speak alice;
	Speak bob(30);

	alice.SaySomething();
	bob.SaySomething();

	return 0;	
}