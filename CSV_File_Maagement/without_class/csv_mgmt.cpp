#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {

	string fileName;
	string delimiter = ",";
	vector<vector<string>> dataList;

	cout << "Enter the filename : " << endl;
	cin >> fileName;

	ifstream file(fileName.c_str());
	string line = "";

	while (getline(file, line, ",")){
		cout << line << endl;
		dataList.push_back(line);

	}
	file.close();

	return 0;
}