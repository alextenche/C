#include <iostream>
using namespace std;

const int & f(int & i){
	return ++i;
}

int main( int argc, char ** argv ) {
	int i = 5;
	//int & ir = i;
	//ir = 10;
	f(i) = 42;
	printf("i is %d\n", i);
	return 0;
}
