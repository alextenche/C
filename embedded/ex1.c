#include <stdio.h>
#include <string.h>

int inGlobal;


int main()
{
	int inLocal;
    int outLocalA;
    int outLocalB;

    // initialize
    inLocal = 5;
    inGlobal = 3;

    // perform calulations
    printf("size of inGlobal is %d bytes\n", sizeof((unsigned char)inGlobal));
    printf("~inGlobal is %d\n", (unsigned char) ~inGlobal);

    printf("-------------------\n");

    printf("size of inGlobal is %d bytes\n", sizeof((unsigned short int)inGlobal));
    printf("~inGlobal is %d\n", (unsigned short int) ~inGlobal);

    printf("-------------------\n");

    outLocalA = inLocal++ & ((unsigned char) ~inGlobal);
    printf("outLocalA is %d\n", outLocalA);

    outLocalB = (inLocal + inGlobal) - (inLocal - inGlobal);
    printf("outLocalB is %d\n", outLocalB);

	return(0);
}

