#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <boost/algorithm/string.hpp>

using namespace std;

class CSVReader {
	string fileName;
	string delimeter;

public:
	
	CSVReader(string filename, string delim = ","):
		fileName(filename), delimeter(delim) {		
		}

	vector<vector<string>> getData();
};


vector<vector<string>> CSVReader::getData() {
	ifstream file(fileName);
	vector<vector<string>> dataList;
	string line = "";

	while (getline(file, line)){
		vector<string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
		dataList.push_back(vec);
	}
	file.close();

	return dataList;
}


int main() {
	CSVReader reader("example.csv");

	vector<vector<string>> dataList = reader.getData();

	for (vector<string> vec : dataList) {
		for (string data : vec) {
			cout << data << ",";
		}
		cout << endl;
	}
}
