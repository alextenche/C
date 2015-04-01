/*============================================================================
 Description : understanding includes
============================================================================*/

#include <stdio.h>
#include <stdlib.h>

#include "myLibrary.h"
#include "myConstants.h"
#include "myMacros.h"

int main(void) {

	printf("Volume of a sphere with radius 5 = %lf\n", volumeSphere(5));

	int list[] = {NUMBERS};
	printf("The 4th element in list is %d\n", list[3]);
	return EXIT_SUCCESS;
}
