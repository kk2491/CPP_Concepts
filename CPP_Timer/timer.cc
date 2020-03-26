#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(){
	bool timerFlag = false;
	cout << "Timer flag Before : " << timerFlag << endl;
	chrono::seconds duration(5);
	this_thread::sleep_for(duration);
	timerFlag = true;
	cout << "Timer flag After  : " << timerFlag << endl;
	return 0;
}