#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
	printf("this is void-pointer.c\n");

	char * cp = "2432";
	int * vp = func(cp);
	printf("%08xh\n", * vp);

	return 0;
}

void * func ( void * vp ) {
	return vp;
}
