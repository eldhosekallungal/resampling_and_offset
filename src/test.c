#include "../header/neclib.h"

int main(){

	double a[] = {1,2,3,4,5,6,7,8,9,10};
	double* b = (double*)calloc(15, sizeof(double));

	resample(a,b,10,6,4);
	unsigned int i;
	for(i = 0; i < 15; i++){
		printf("%d\n", (int)*b++);
	}
	return 0;
}
