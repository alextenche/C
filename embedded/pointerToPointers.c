#include<stdio.h>
#include<conio.h>

void swap( int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}


int main (){

    int n = 3;
    int *pn = &n; // pointer to n
    int **ppn = &pn; // pointer to address of n

    printf("%d\n", *pn);
    printf("%x\n", &n);
    printf("%d\n", **ppn);
    printf("%x\n", &pn);

    int a = 65;
    int b = 11;
    int *pa = &a;
    int *pb = &b;
    //swap(pa,pb);
    //prinft("a is %d, b is %d\n", a, b);

    char str1[] = "hello" ; // length = 6
    printf("%s\n", str1);

    char str2[] = "goodbye" ; // length = 8
    char str3[] = "ciao" ; // length = 5

    char strArray[] = {str1, str2, str3};
    //printf("%s\n", *strArray);




    return 0;
}
