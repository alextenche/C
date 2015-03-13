#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	unsigned int x = 5;
	unsigned int y = 10;
	printf("x = %08x, y = %08x, x & y = %08x\n", x, y, x & y );
	printf("x = %08x, y = %08x, x | y = %08x\n", x, y, x | y );
	printf("x = %08x, y = %08x, x ^ y = %08x\n", x, y, x ^ y );
	printf("x = %08x, y = %08x, ~ x = %08x\n", x, y,  ~ x );
	printf("x = %08x, y = %08x, x << 4 = %08x\n", x, y,  x << 4 );
	x = 0x50;
	printf("x = %08x, y = %08x, x >> 4 = %08x\n", x, y,  x >> 4 );
	return 0;
}
