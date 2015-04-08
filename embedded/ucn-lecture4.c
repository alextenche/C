#include<stdio.h>
#include<conio.h>


int main (){

    float a = 4;
    int b;
    int c;

    a = 2.6;
    c = 2;

    b = (int)a * c;
    printf("%d\n", b);

    b = (int)(a *(float)c);
    printf("%d\n", b);

    return 0;
}
