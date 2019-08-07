#include <string.h>
#include <iostream>

using namespace std;

void compareOperation1(string s1, string s2){
	if (s1.compare(s2) > 0){
		cout << s1 << " i dont know " << s2 << endl;
	}
	else {
		cout <<"Upper condition false" << endl;
	}
}

int main(int argc, char **argv){

	string string_1 = "fake_signal_1";
	string string_2 = "fake";

	compareOperation1(string_1, string_2);

	return 0;

}