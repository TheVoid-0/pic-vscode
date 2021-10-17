/*
 * Led Blink example on PIC18F4550.
 *
 */
#include <xc.h>
#include <pic18f4550.h>

#define _XTAL_FREQ 1000000 // 1Mhz

void main() {
    
    TRISB = 0x00;

    while(1) {
        LATB = 0x01;
        __delay_ms(250);
        LATB = 0x00;
        __delay_ms(250);
    }

    
}