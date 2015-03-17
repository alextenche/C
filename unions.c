#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//----- EXAMPLE 1 -----
	union symbol{
		int number;
		char letter;
	};

	union symbol value;

	value.number = 25;
	printf("size of union is %d\n", sizeof(union symbol));
	printf("----------------------------------\n");
	printf("adress for value.number is %x\n", &value.number);
	printf("value for value.number is %d\n", value.number);
	printf("----------------------------------\n");
	printf("changing value.letter to 'm'\n");
	value.letter = 'm';
	printf("adress for value.letter is %x\n", &value.letter);
	printf("value for value.letter is %c\n", value.letter);

	union symbol *ptr; 	//pointer to union
	ptr = &value;
	char myLetter = ptr->letter;
	printf("Letter field: %c\n", myLetter);
	printf("Number field: %d\n", ptr->number);

	return EXIT_SUCCESS;
}
