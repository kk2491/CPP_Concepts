#include "veggies.hpp"
#include "fruits.hpp"

class Store {

private:
	string shop_name;
	int num_of_category;
	Veggies veg_item_;
	Fruits fruit_item_;

public:
	Store();
	void get_items();
};