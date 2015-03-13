#include <iostream>
using namespace std;

int & f( int & i ){
	puts("this is f()");
	return ++i;
}

int main( int argc, char ** argv ) {
	int x = 5;

	printf("x is %d\n", x);
	printf("result is %d", f(x) = f(x) + 1);

	return 0;
}
