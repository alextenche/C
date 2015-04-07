#include<stdio.h>
#include<conio.h>


int main (){

    struct flag {
        unsigned int is_color :1;
        unsigned int has_sound : 1 ;
        unsigned int is_ntsc :1;
    };

    struct flag ex;
    printf("%d", ex.is_color);

    ex.is_color = 0;
    printf("%d", ex.is_color);

    struct flag f;                  // CLR=0x1, SND=0x2, NTSC=0x4;
    f.has_sound = 1;                // x|= CLR; x|=SND; x|=NTSC
    f.is_color = 1;
    f.has_sound = 0;                // x&= ~CLR; x&=~SND;
    f.is_color = 0;
    if(f.is_color || f.has_sound)   // if (x & CLR || x& NTSC)



    return 0;
}
