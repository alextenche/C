#include <stdio.h>
#include "func.h"

int main( int argc, char ** argv ) {
	printf("Hello, World!\n");
	int y = 50;
	int x = func(y);
	printf("value is %d\n", x);
	printf("y is %d\n", y);
	return 0;
}

int func(int x) {
	int i = 0;
	x = 100;
	printf("this is in the function\n");
	i += x;
	return i;
}
