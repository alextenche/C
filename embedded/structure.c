#include<stdio.h>
#include<conio.h>


int main (){

    struct foo1 {
        short s1; union {
            int i1;
            char c1;
        }u1;
        unsigned int flag_s1 : 1;
        unsigned int flag_u1 : 2;
        unsigned int bar1 ;
    };

    struct foo2 {
        union {
            //int i2;
            //char c2;
        }u2;
        unsigned int bar2;
        short s2;
        unsigned int flag_s2 : 1;
        unsigned int flag_u2 : 2;
    };

    printf("size of foo1 is %d bytes\n", sizeof(struct foo1));
    printf("size of foo2 is %d bytes", sizeof(struct foo2));



    return 0;
}
