#include <stdio.h>
#include <math.h>

int main(void) {
    int myArray[25] = {160, 190, 100, 70, 50, 220, 120, 200, 30, 130,
                        180, 100, 100, 100, 40, 80, 240, 110, 100, 170,
                        10, 140, 60, 230, 100};

    int targetNumber = 100, count = 0;

    for (int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++) {
        if (myArray[i] == targetNumber) {
            count ++;
        }
    }

    printf("The total number of count is: %i\n", count);
    return 0;
}  