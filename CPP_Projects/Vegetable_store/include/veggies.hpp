#include <iostream>
#include <vector>

using namespace std;

class Veggies {

private:
	string veggie_name_;
	int num_of_veggies_;
	bool veggie_available_;

public:
	Veggies();
	void set_veggies_name(string name);
	void set_numberof_veggies(int num);
	void get_veggie_availability(int num);
};