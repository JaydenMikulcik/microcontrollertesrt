#include <xc.h>



// Define your functions or variables here

int delay_ms(unsigned int ms) {
    return 1;
    }

int main(void) {
    // Initialize the microcontroller
    // Configure I/O pins, peripherals, etc.

    TRISBbits.TRISB0 = 0; // Set RB0 as an output (for LED)

    while (1) {
        LATBbits.LATB0 ^= 1; // Toggle the state of RB0 (LED)
        delay_ms(1000);      // Delay for 1 second
    }

    return 0;
}

