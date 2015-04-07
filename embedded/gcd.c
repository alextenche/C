#include<stdio.h>
#include<conio.h>

#define min(a,b) ((a) < (b) ? (a) : (b))

int gcd ( int a, int b ) {
    int i , ret = 1, minval = min(a,b);

    for (i = 2; i <= minval; i++) {
        if (a % i) // i not divisor of a
            continue ;
        if (b % i == 0) // i is divisor of both a and b
            ret = i;
    }
    return ret ;
}

int main(){

    int a = 112;
    int b = 212;

    int res = gcd(a,b);

    printf("gcd of %d and % d, is %d\n", a, b, res);


}
