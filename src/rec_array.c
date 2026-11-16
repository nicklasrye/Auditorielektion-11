#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// TODO: Auditorieopgave B
//       Skriv et rekursivt program som:
//          Givet et array af integers udregner summen af alle tallene.

void print_array(int arr[], int size) {
    //Grundtilfælde:
    if (size == 0) {
        printf("\n");
        return;
    }

    //Rekursivt tilfælde:
    printf("%d, ", arr[0]);
    //printf resten af arr
    print_array(&arr[1], size -1);
}



int main(void) {
    int test[5] = {1,2,3,4,5};
    print_array(test, 5);

    return 0;
}
