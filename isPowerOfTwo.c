/*
============================================================================
Description : check if number is power of 2
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int isPowerOfTwo_First (unsigned int x){
	// While x is even and > 1
	while (((x % 2) == 0) && x > 1){
		x /= 2;
	}
	printf("%d", x ==1);
	return (x == 1);
}

int ispowerof2(unsigned int x) {
   return x && !(x & (x - 1));
 }

int main(void) {
	if(ispowerof2(52)){
		printf("%d", ispowerof2(52) );
		printf("ye, is power of two");
	} else {
		printf("%d", ispowerof2(52) );
		printf("nope, no power of two");
	}


	return EXIT_SUCCESS;
}
