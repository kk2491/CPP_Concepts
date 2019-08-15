#include <iostream>
#include <vector>

using namespace std;

class Fruits {

private:
	string fruit_name_;
	int num_of_fruits_;
	bool fruit_available_;

public:
	Fruits();
	void set_fruit_name(string name);
	void set_numberof_fruits(int num);
	void get_fruit_availability(int num);
};