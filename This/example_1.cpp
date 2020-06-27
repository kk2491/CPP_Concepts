#include <iostream>

using namespace std;

class Test {

private:
	int private_x;
	int this_y;

public: 
	void SetX(int x, int y) {
		private_x = x;
		this->this_y = y;
	}

	void Print() {
		cout << "Private data x : " << private_x << endl;
		cout << "This data      : " << this_y << endl;
	}
};


int main() {

	Test test_obj;
	int x = 10;
	int y = 20;
	test_obj.SetX(x, y);
	test_obj.Print();
	return 0;
}