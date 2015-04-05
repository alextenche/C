#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void modify(char *s);

int main()
{
	char string[64];

	puts("Enter some text : ");
	fgets(string, 64, stdin);

	modify(string);

	puts("Here is your modified string : ");
    printf("%s", string);

	return(0);
}

void modify(char *s)
{
    while(*s){
        *s = toupper(*s);
        if(*s == ' '){
            *s = '';
        }
		s++;
	}
}

