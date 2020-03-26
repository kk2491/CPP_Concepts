#include <iostream>
#include <vector>

using namespace std;

void updateVector(vector<double> &vectorElements) {

	vectorElements.push_back(10.0);
	vectorElements.push_back(100.0);
	vectorElements.push_back(1000.0);
	vectorElements.push_back(10000.0);

}

int main(int argc, char **argv) {

	vector<double> vectorElements;
	updateVector(vectorElements);

	cout << "vector size after updating : " << vectorElements.size() << endl;
	
	cout << "Vector Elements are : " << endl;
	for (auto& vectorElement:vectorElements){
		cout << vectorElement << endl;
	}

	return 0;
}