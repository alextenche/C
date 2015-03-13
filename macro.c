#include <stdio.h>

#define MACRO1(a, b) ( a > b ? a: b )

int main( int argc, char ** argv ) {
	int x = 5;
	int y = 7;
	printf("x: %d, y: %d, result: %d\n", x, y, MACRO1(x, y));
	return 0;
}
