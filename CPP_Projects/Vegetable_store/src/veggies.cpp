#include <iostream>
#include <vector>
#include "veggies.hpp"

using namespace std;

Veggies::Veggies() {

}

void Veggies::set_veggies_name(string veggie_name) {
	veggie_name_ = veggie_name;
}


void Veggies::set_numberof_veggies(int num) {
	num_of_veggies_ = num;
}

void Veggies::get_veggie_availability(int num) {

	num_of_veggies_ = num;

	if (num_of_veggies_ > 0) {
		veggie_available_ = true;
		cout << "Veggie Available !!!" << endl;
	}
	else {
		veggie_available_ = false;
		cout << "Veggie not Available !!!" << endl;
	}
}