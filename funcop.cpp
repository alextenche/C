// the function call operator
#include <iostream>
using namespace std;

int f( int i) {
	cout << "this is f()" << endl;
	return i;
}

int main( int argc, char ** argv ) {
	int i;
	int (*pFunc)(int) = &f;
	i = (*pFunc)(47);
	printf("i is %d\n", i);
	return 0;
}
