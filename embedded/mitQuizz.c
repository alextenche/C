#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 017;    // octal ? = 15
    printf("int x = 017; ---> %d\n", x);

    int y = 12;      // decimal = 12
    printf("int y = 12; ---> %d\n", y);

    char z = 'a';
    printf("char z = 'a'; ---> %d\n", z);

    printf("z & 1 ---> %d\n", z & 1);  // intresting :)

    short int s=0xFFFF12;
    printf("short int s=0xFFFF12 ---> %d\n", s);

    char c = -1;
    printf("char c = -1; ---> %d\n", c);

    unsigned char uc = -1;
    printf("unsigned char uc = -1; ---> %d\n", uc);

    // puts("hel"+"lo");  -- wrong
    puts("hel""lo");

    enum sz{S=0,L=3,XL}; // what is the value of XL
    printf("enum sz{S=0,L=3,XL}; value of XL is %d\n", XL);

    enum sz1{S1=0,L1=-3,XL1}; // what is the value of XL
    printf("enum sz1{S1=0,L1=-3,XL1}; value of XL1 is %d\n", XL1);


}
