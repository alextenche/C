#include <stdio.h>

int main( int argc, char ** argv ) {
	char s[] = {'s', 't', 'r', 'i', 'n', 'g', 0};
	printf("string: %s\n", s);

	for(char * cp = s; *cp; ++cp){
		printf("char is: %c\n", *cp);
	}
	return 0;
}