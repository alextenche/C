#include<stdio.h>
#include<conio.h>

int main (){

    // read the port
    int myint;
    PORT4.DDR.BIT.B0 = 1;  // set the direction; DDR - data direction register
    myint = (int)PORT4.DR.BIT.B0; // read the port; DR - data register

    // turn the led on if button pressed
    PORT4.DDR.BIT.B0 = 0; // push button - input
    PORTD.DDR.BIT.B0 = 1; // light led - output
    while(1){

        if(!PORT4.DR.BIT.BO){
            PORTD.DR.BIT.B0 = 1;
        } else {
            PORTD.DR.BIT.B0 = 0;
        }
    }

    return 0;
}
