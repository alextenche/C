#include <stdio.h>

int main( int argc, char ** argv ) {
	int a = 0;
	int b = 1;
	if(a){
		puts("this is true");
	} else if(b){
		puts("this is not true");
	} else {
		puts("nothing is true");
	}
	return 0;
}