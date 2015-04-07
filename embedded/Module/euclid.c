#include<stdio.h>
#include<conio.h>

// the gcd() function
int gcd ( int a, int b) {
    while (b) { // if a < b, performs swap
        int temp = b;
        b = a % b;
        a = temp ;
    }
    return a;
}

// extended euclid
int ext_euclid ( int a, int b){
    printf("extended !");
    return 1;
}
