#include "../header/neclib.h"

double mod(complex a){
	return sqrt(pow(a.x,2) + pow(a.y, 2));
}

complex conj(complex a){
	a.y = -a.y;
	return a;
}
complex add(complex a, complex b){
	complex result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

complex sub(complex a, complex b){

	b.x = -b.x;
	b.y = -b.y;

	return add(a,b);
}
complex mul(complex a, complex b){

	complex result;

	result.x = a.x*b.x - a.y*b.y;
	result.y = a.x*b.y + a.y*b.x;

	return result;

}

complex div(complex a, complex b){
	complex result;
	result = mul(a, conj(b));
	double norm = pow(mod(a),2);
	result.x = result.x/norm;
	result.y = result.y/norm;

	return result;

}

