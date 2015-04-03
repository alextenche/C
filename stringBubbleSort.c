#include <stdio.h>
#include<string.h>

#define SIZE 64

int main()
{
	char string[SIZE];
	char temp;
	int length, outer, inner;

    // get the string
    printf("Enter a string: ");
	fgets(string, SIZE, stdin);
	length = strlen(string);

    // sort the string
	for(outer = 0; outer < length; outer++){
        for(inner = outer + 1; inner < length; inner++){
            if( string[outer] > string[inner])
			{
				temp = string[inner];
				string[inner] = string[outer];
				string[outer] = temp;
			}
		}
	}

    // display the sorted string
	puts("Sorted string:");
	printf(" %s\n", string);

	return(0);
}



