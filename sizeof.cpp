// determine the size of a type, an operator
#include <iostream>
using namespace std;

struct S{
	int a;
	int b;
	char c;
	char d;
	long int e;
	long int f;
};

int main( int argc, char ** argv ) {
	printf("size is %d bytes\n", (int) sizeof(char));
	printf("size is %d bytes\n", (int) sizeof(struct S));
	return 0;
}
