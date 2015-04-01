/*============================================================================
 Description : Passing variables to functions, as values and as references
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

//Function prototype
void byValueFunction(int a, int b);
void byReferenceFunction(int *a, int *b);

int main(void) {

	// by value, argument VALUES are copied into the function parameters
	printf("--- By Value ---\n");
	int x = 0;
	int y = 0;
	printf("Before function call: x=%d   y=%d\n", x, y);
	byValueFunction(x,y);
	printf("After function call: x=%d   y=%d\n", x, y);


	// by reference, argument ADDRESSES are copied into the function parameters
	printf("\n--- By Reference ---\n");
	x = 0;
	y = 0;
	printf("Before function call: x=%d   y=%d\n", x, y);
	byReferenceFunction(&x,&y);
	printf("After function call: x=%d   y=%d\n", x, y);
	return EXIT_SUCCESS;
}

void byValueFunction(int a, int b){
	printf("In function received: a=%d   b=%d\n", a, b);
	a = 111;
	b = 222;
	printf("In function modified: a=%d   b=%d\n", a, b);
}

void byReferenceFunction(int *a, int *b){
	printf("In function received: a=%d   b=%d\n", *a, *b);
	*a = 111;
	*b = 222;
	printf("In function modified: a=%d   b=%d\n", *a, *b);
}
