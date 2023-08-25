#include <stdio.h>
#include <math.h>

int main(void) {
    int minNumber;
    int myArray[25] = {160, 190, 100, 70, 50, 220, 120, 200, 30, 130,
                        180, 210, 250, 150, 40, 80, 240, 110, 90, 170,
                        10, 140, 60, 230, 20};

    minNumber = myArray[0];

    for (int i = 0; i < 25; i++) {
        if (myArray[i] < minNumber) {
            minNumber = myArray[i];
        }
    }

    printf("The smallest number is: %i\n", minNumber);
  return 0;
}  