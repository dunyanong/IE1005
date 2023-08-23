#include <stdio.h>
#include <math.h>

int main(void) {
    int myArray[25] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
                       110, 120, 130, 140, 150, 160, 170, 180, 190, 200,
                       210, 220, 230, 240, 250};

    int max;
    max = myArray[0];

    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        if (max < myArray[i]) {
            max = myArray[i];
        }
    }

    printf("Max Number: %d \n", max);
    return 0;
}