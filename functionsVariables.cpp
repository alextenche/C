// functions - using automatic and static variables
#include <iostream>
using namespace std;

void func();

int main( int argc, char ** argv ) {
	func();
	func();
	func();
	func();
	func();
	return 0;
}

void func() {
	static int i = 5;
	printf("this is func() i is %d\n", i++);
}
