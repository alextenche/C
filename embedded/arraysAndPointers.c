#include<stdio.h>
#include<conio.h>


int main (){

    int arr[8] = {0,1,2,3,4,5,6,7};

    int a = arr [0];

    int *pa = arr;
    printf("%d\n", *pa);

    // *pa = &arr[0];
    // printf("%d\n", *pa);

    printf("%d\n", *(pa+3));

    char *pc = (char *)pa;
    printf("%d\n", (int *)(pc+12));



    return 0;
}
