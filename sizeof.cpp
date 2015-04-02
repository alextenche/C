// determine the size of a type, an operator
#include <iostream>
using namespace std;

bool b;
char c;
int n;
long l;
float f;
double d;

int main( int argc, char ** argv ) {
	printf("size is %d bytes\n", (int) sizeof(char));
	printf("size is %d bytes\n", (int) sizeof(struct S));
	return 0;
}
