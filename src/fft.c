#include "../header/neclib.h"
#include "../header/fft.h"
#include <math.h>

void fft(complex input[], complex output[], unsigned int N){
	unsigned int numStages = (unsigned int)log2((double)N);
	unsigned short* bitOrderIndex = (unsigned short*)calloc(N, sizeof(unsigned short));
	if((double)numStages != pow(2,(double)N)){
		printf("This FFT is a radix-2 implementation use N as power of 2");
		return;
	}
	getBitOrderIndex(bitOrderIndex, N);

	unsigned short i;
	unsigned short j;
	for(i = 0; i < numStages; i++){

	}
}

