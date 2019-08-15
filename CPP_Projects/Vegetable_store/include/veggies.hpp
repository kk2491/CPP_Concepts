#include <iostream>
#include <vector>

using namespace std;

class Veggie {

void Veggie {}

private:
	string veggie_name;
	int num_of_veggies;
	bool veggie_available;

public:
	void set_veggi_name(string name);
	int set_numberof_veggies(int num);
	bool get_veggie_availability(int num);
}