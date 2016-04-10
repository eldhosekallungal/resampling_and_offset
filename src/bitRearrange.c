#include "../header/neclib.h"

unsigned short reverseBits(unsigned short num, unsigned short NO_OF_BITS)
{
    unsigned short reverse_num = 0;
    int i;
    for (i = 0; i < NO_OF_BITS; i++)
    {
        if((num & (1 << i)))
           reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
   }
    return reverse_num;
}
void getBitOrderIndex(unsigned short index[], unsigned short N){

	unsigned short NO_OF_BITS = (unsigned short)log2(N);
	unsigned short i;
	for(i = 0; i < N; i++){
		*index++ = reverseBits(i, NO_OF_BITS);
	}
}
