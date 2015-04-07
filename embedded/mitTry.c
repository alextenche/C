#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 2;
    int y;

    y = x++;
    printf("y = x++; ---> %d\n", y);

    int res = 0x77 & 0x3;
    printf("0x77 & 0x3; ---> 0x%x\n", res);

    res = 0x77 & 0x0;
    printf("0x77 & 0x3; ---> 0x%x\n", res);

    res = 0x700 | 0x33;
    printf("0x700 | 0x33; ---> 0x%x\n", res);

    res = 0x01<<4;
    printf("0x01<<4; ---> 0x%x\n", res);

    res = 'a'<<1;
    printf("'a'<<1; ---> 0x%x\n", res);  // intresting

    /*const char str[] = "some text" ;
    if (str) // string is not null
        return 0;*/
    x = 10;
    if (x % 2 == 0)
        y += x / 2;
    else if (x % 4 == 1)
        y += 2 * ((x + 3)/4);
    else
        y += (x+1)/2;

    printf("%d", y);

}
