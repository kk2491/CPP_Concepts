#include <string.h>
#include <iostream>

using namespace std;

void compareOperation(string s1, string s2){
	if (s1.compare(s2) < 0){
		cout << "substring found " << endl;
	}
	else {
		cout <<"substring not found" << endl;
	}
}

void comaprewithFind(string s1, string s2){
	if (s1.find(s2) != string::npos){
		cout << "substring found" << endl;
	}
	else {
		cout << "substring not found" << endl;
	}
}

int main(int argc, char **argv){

	string string_1;
	string string_2;

	cout << "Enter the main string " << endl;
	cin >> string_1;

	cout << "Enter the substring to search for " << endl;
	cin >> string_2;

	// compareOperation(string_1, string_2);
	comaprewithFind(string_1, string_2);


	return 0;

}