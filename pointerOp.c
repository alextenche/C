// pointer operations
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size = 15;
	int *ptr1;
	ptr1 = &size;
	printf("Address %x contains %d\n", ptr1, *ptr1);
	printf("---------------------------\n");


	int ems[] = {15, 20, 30};

	int *ptr2 = ems;  // ptr2 points to start of array
	printf("Address %x stores first element from array is %d\n", ptr2, *ptr2);

	ptr2++; // point to the second value in the array
	printf("Address %x stores second element from array is %d\n", ptr2, *ptr2);

	ptr2++; // point to the third value in the array
	printf("Address %x storesthird element from array is %d\n", ptr2, *ptr2);

	ptr2--;
	ptr2--;
	printf("Address %x stores again the first element from array is %d\n", ptr2, *ptr2);

	return EXIT_SUCCESS;
}
