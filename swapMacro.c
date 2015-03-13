#include <stdio.h>

#define SWAP(a,b) do{ \
						a ^= b; \
						b ^= a; \
						a ^= b; \
					}while(0)

int main( int argc, char ** argv ) {
	int this = 7;
	int that = 9;
	printf("this is %d and that is %d\n", this, that);
	SWAP(this,that);
	printf("this is %d and that is %d\n", this, that);

	return 0;
}
