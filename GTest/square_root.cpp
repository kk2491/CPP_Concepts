#include <math.h>

double FindSquareroot(double num){

	double result = 0;
	if(num < 0){
		return -1;
	}
	else if(num == 0){
		return 0;
	}
	else{
		result = sqrt(num);
		return result;
	}
}