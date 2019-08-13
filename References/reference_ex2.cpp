#include <iostream>

using namespace std;

void swapNumbers(int &num1, int &num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	return;
}


int main(int argc, char** argv) {

	int num1, num2;
	num1 = 100;
	num2 = 200;

	cout << "In main before : " << num1 << " " << num2 << endl;

	swapNumbers(num1, num2);

	cout << "In main after  : " << num1 << " " << num2 << endl;

	return 0;
}