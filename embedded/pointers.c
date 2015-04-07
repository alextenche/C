#include<stdio.h>
#include<conio.h>

void swap( int *x, int *y) {
    int temp = *x;
    *x= *y;
    *y = temp ;
}

int main (){

    int n = 4;
    double pi = 3.14159;
    int *pn = &n; //address of integer n
    double *ppi = &pi; // address of double pi

    // prints "pi = 3.14159\n "
    printf ( "pi = %g\n" ,* ppi );

    // pi now equals 7.14159
    * ppi = * ppi + *pn ;

    ppi =(double *)pn; // pn originally of type ( int *)

    int a = 5, b = 7;
    swap(&a, &b);
    // now, a=7, b=5
    printf("a is %d, b is %d\n", a, b);

    int s = sizeof(char);  // == 1
    printf("sizeof(char) ---> %d\n", s);

    double f = sizeof(f);  // == 8
    printf("sizeof(f) ---> %lf\n", f);

    int array1[8];
    printf("sizeof(array1[8]) ---> %d\n", sizeof(array1));





    return 0;
}
