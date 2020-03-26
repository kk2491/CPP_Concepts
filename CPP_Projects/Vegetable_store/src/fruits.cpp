#include <iostream>
#include <vector>
#include "fruits.hpp"

using namespace std;

Fruits::Fruits() {

}

void Fruits::set_fruit_name(string fruit_name) {
	fruit_name_ = fruit_name;
}


void Fruits::set_numberof_fruits(int num) {
	num_of_fruits_ = num;
}

void Fruits::get_fruit_availability(int num) {

	num_of_fruits_ = num;

	if (num_of_fruits_ > 0) {
		fruit_available_ = true;
		cout << "Fruit Available !!!" << endl;
	}
	else {
		fruit_available_ = false;
		cout << "Fruit not Available !!!" << endl;
	}
}