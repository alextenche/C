/*============================================================================
 Description : recursive challenge
============================================================================*/

#include <stdio.h>
#include <stdlib.h>

void number_series(int lower, int upper);

int main(void) {

	printf("Enter the small number: ");
	int smallNum;
	scanf("%d\n", &smallNum);

	printf("Enter the large number: ");
	int largeNum;
	scanf("%d\n", &largeNum);

	number_series(smallNum, largeNum);

	return EXIT_SUCCESS;
}

void number_series(int lower, int upper){
	printf("k: %d\n",lower);
	if(lower<upper)
		number_series(lower+1, upper);
}
