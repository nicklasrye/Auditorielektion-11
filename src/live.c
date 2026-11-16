#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


unsigned int power_of(unsigned int tal, unsigned int potens) {
    if (potens == 0) {
        return 1;
    }
    unsigned int  temp = power_of(tal, potens - 1);
    return tal * temp;
}


int main(void) {
    unsigned int result = power_of(3, 4);
    printf("%u", result);

    return 0;
}
