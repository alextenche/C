#include <stdio.h>

int main( int argc, char ** argv ) {
	int a = 5;
	int c = (a == 5) ? 7 : 9;
	printf("c is %d", c);
	return 0;
}