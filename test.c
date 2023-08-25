#include <stdio.h>
#include <math.h>

int main(void) {
    // it must be odd number to reflect
    int myArray[25] = {160, 190, 100, 70, 50, 220, 120, 200, 30, 130,
                        180, 100, 100, 100, 40, 80, 240, 110, 100, 170,
                        10, 140, 60, 230, 20};

    printf("---------------Original array: \n");
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Two pointers approach
    int start = 0;
    int end = sizeof(myArray)/sizeof(myArray[0]) - 1;

    while (start < end) {
        int temp = myArray[start];
        myArray[start] = myArray[end];
        myArray[end] = temp;

        start++;
        end--;
    }

    printf("---------------Reversed array: \n");
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");    
    
    return 0;
}