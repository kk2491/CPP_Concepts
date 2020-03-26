#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **agrv) {

	int serial_number = 100;
	double salary = 30140.10;

	int &ref_serial_number = serial_number;
	double &ref_salary = salary;

	cout << "Just after assigning the variables to reference " << endl;
	cout << "Actual variables : " << serial_number << "||" << salary << endl;
	cout << "Reference variables : " << ref_serial_number << "||" << ref_salary << endl;

	cout << "Make changes to actual variables" << endl;
	serial_number = 200;
	salary = 10.11;
	cout << "Actual variables : " << serial_number << "||" << salary << endl;
	cout << "Reference variables : " << ref_serial_number << "||" << ref_salary << endl;

	cout << "Make changes to reference variables" << endl;
	serial_number = 200000;
	salary = 1111.11;
	cout << "Actual variables : " << serial_number << "||" << salary << endl;
	cout << "Reference variables : " << ref_serial_number << "||" << ref_salary << endl;


	return 0;
}