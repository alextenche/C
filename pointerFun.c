#include <stdio.h>
#include <stdlib.h>

void change_value(int *);

int main( int argc, char ** argv ) {
	int x = 10;
	int *p;
	p = &x;

	printf("The value of x is %d\n", x);
	printf("The mem address of x is %p\n", p);
	printf("The mem address of x is %p\n", &x);
	printf("The value of x is %d\n", *p);
	printf("The value of x is %d\n", *(&x));

	printf("--------------------\n");

	int w = 10;
	printf("The value of w before the fucntion is %d\n", w);
	change_value(&w);
	printf("The value of w before the fucntion is %d\n", w);

	return 0;
}

void change_value(int *p){
	*p = 15; // *p = 15 --> *(&x) = 15 --> x = 15
	//printf("The address of w inside the function is %p\n", &p);
}
