#include "../header/neclib.h"

void findPerfectFraction(unsigned int *P, unsigned int *Q){
	unsigned int i, flag = 1;
	unsigned int p = *P, q = *Q;
	unsigned int divValue;
	if(p > q){
		divValue = p/q;
		p = p%q;
	}
	else{
		divValue = q/p;
		q = q%p;
	}
	while(flag){
		if(min(p,q) < 2)
			break;
		for(i = 2; i <= min(p, q); i++){
			if(p%i == 0 && q%i == 0){
				p = p/i;
				q = q/i;
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
	}
	if(p < q){
		*P = divValue*q + p;
		*Q = q;
	}
	else{
			*P = p;
			*Q = divValue*p + q;
		}
}
