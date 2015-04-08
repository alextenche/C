#include<stdio.h>
#include<conio.h>

struct st_port4 {
    union {
        unsigned char BYTE;
        struct {
            unsigned char B7:1;
            unsigned char B6:1;
            unsigned char B5:1;
            unsigned char B4:1;
            unsigned char B3:1;
            unsigned char B2:1;
            unsigned char B1:1;
            unsigned char B0:1;
        } BIT;
    } DDR;
}

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
