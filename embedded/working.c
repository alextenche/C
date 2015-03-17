#include <stdio.h>

int main( int argc, char ** argv ) {
	unsigned int counter = 0x22;

	while(counter < 41){
		++counter;
		printf("%d & 1 = %d\n", counter,  counter & 1);
		if((counter & 1) != 0){

		} else {

		}
	}


	return 0;
}
