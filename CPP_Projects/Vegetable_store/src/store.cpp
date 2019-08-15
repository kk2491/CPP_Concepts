#include <iostream>
#include "store.hpp"

using namespace std;

Store::Store(){
	//Veggies veg_item;
	//Fruits fruit_item;
}

void Store::get_items(){
	veg_item_.get_veggie_availability(100);
	fruit_item_.get_fruit_availability(100);
	cout << "Test passed ???" << endl;
}