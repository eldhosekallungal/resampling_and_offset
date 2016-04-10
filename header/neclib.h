/*
 * neclib.h
 *
 *  Created on: Apr 10, 2016
 *      Author: nxa27820
 */

#ifndef HEADER_NECLIB_H_
#define HEADER_NECLIB_H_

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

typedef struct{
	double x;
	double y;
}complex;

void resample(double*, double*, unsigned int, unsigned int, unsigned int);
void findPerfectFraction(unsigned int*, unsigned int*);

#endif /* HEADER_NECLIB_H_ */
