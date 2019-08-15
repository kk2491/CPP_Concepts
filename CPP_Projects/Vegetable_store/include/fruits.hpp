#include <iostream>
#include <vector>

using namespace std;

class Fruits {

private:
	string fruit_name;
	int num_of_fruits;
	bool fruit_available;

public:
	void set_fruit_name(string name);
	int set_numberof_fruits(int num);
	bool get_fruit_availability(int num);
}