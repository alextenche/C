#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Static arrays waste memory
	//Guaranteed to allocate 20 integers
	int staticArray[20];

	//Dynamic arrays save memory by creating a pointer that stores
	//the beginning of the array
	int *dynamicArray = malloc(20 * sizeof(int));
	*dynamicArray = 10;
	printf("Address %x stores value %d\n", dynamicArray, *dynamicArray);

	dynamicArray[1] = 20;
	printf("dynamicArray[1] at address %x, stores value %d\n" ,&dynamicArray, dynamicArray[1]);
	printf("The size of dynamicArray is %d\n", sizeof(dynamicArray));

	dynamicArray[2] = 30;
	printf("dynamicArray[2] stores value %d\n", dynamicArray[1]);
	printf("The size of dynamicArray is %d\n", sizeof(dynamicArray));

	// Release unused memory:
	free(dynamicArray);

	return EXIT_SUCCESS;
}
