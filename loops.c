#include <stdio.h>

int main( int argc, char ** argv ) {
	int x = 5;
	while(x){
		printf("x is %d\n", x);
		--x;
	}

	x = 5;
	do{
		printf("x is %d\n", x);
	} while(--x);

	for(int x = 5; x; --x){
		printf("x is %d\n", x);
	}

	int ia[] = {1, 2, 3, 4, 5, 0};
	for(int *ip = ia; *ip; ++ip){
		printf("value is %d\n", *ip);
	}

	return 0;
}