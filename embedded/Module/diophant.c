#include<stdio.h>
#include<conio.h>

#include "euclid.h"

int main()
{
    int a = 111;
    int b = 211;
    int g, c, grow;

    // compute g = gcd(a,b)
    g = gcd(a,b);

    //compute x and y using Extended Euclidean alg
    g = ext_euclid(a,b);

    // rescale so ax+by = c
    grow = c/g;
    x *= grow ;
    y *= grow ;

}
