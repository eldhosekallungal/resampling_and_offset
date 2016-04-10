#include "../header/neclib.h"

void resample(double input[], double output[], unsigned int size,
		unsigned int P, unsigned int Q){

	findPerfectFraction(&P, &Q);

	/*
	 * For upsampling
	 * we have to add P-1 zeros between each samples
	 * So the resultant array have a size of P*size
	 */

	double* outUpsample = (double*)calloc(size, sizeof(double));
	unsigned int i;

	for(i = 0; i < size; i++){
		*outUpsample = input[i];
		outUpsample += P;

	}
	outUpsample -= size*P;
	/*
	 * Now we have to use the interpolation filter
	 */


	/*
	 * For downsampling
	 * pick each qth element
	 */

	for(i = 0; i < P*size/Q; i++){
		output[i] = *outUpsample;
		outUpsample += Q;
	}

	/*
	 * Now we have to use the decimation filter
	 */
}
