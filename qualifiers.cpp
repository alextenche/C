#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	const int i = 47;
	printf("The integer is %d\n", i);

	for(int i = 0; i < 5; ++i){
		static int j = 12;
		j += i;
		printf("i is %d, j is %d\n", i, j);
	}
	return 0;
}

