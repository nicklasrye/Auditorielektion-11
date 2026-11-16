#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// TODO: Auditorieopgave A
//       Skriv en potensfunktion ud fra den smarte rekursive definition.

unsigned int power_of(unsigned int tal, unsigned int potens) {
    if (potens == 0) {
        return 1;
    }
    else if (potens%2==0) {
        return power_of(tal, potens/2)*power_of(tal, potens/2);
    }
    else (potens% 2<=0); {
    unsigned int  temp = power_of(tal, potens - 1);
    return tal * temp;
    }
}

int main(void) {
    unsigned int result = power_of(3, 4);
    printf("%u", result);


    return 0;
}
