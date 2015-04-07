#include<stdio.h>
#include<conio.h>

int arr[] = {10 ,9 ,8 ,1 ,2 ,3 ,5};

// callback
int asc ( void* pa , void* pb ) {
    return ( *(int *)pa  - *(int *)pb );
}

// callback
int desc ( void* pa , void* pb ) {
    return ( *(int *)pb - *(int *)pa );
}

int main (){

    int x; void *p = &x; // points to int
    float f; void *q = &f; // points to float

    int *px=(int*)p;
    printf ("%d\n",*px); // valid
    printf("-------------------\n");

    int arr[] = {10 ,9 ,8 ,1 ,2 ,3 ,5};
    printf("%d", arr[0]);
    // sort in ascending order
    qsort ( arr , sizeof(arr)/sizeof(int), sizeof(int), asc);

    // sort in descending order
    //qsort ( arr , sizeof ( arr )/ sizeof ( int ), sizeof ( int ) ,desc);

    return 0;
}
