#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int *a, int *b);

int main(void) {
    int x, y;
    x = 5;
    y = 10;

    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);

    printf("After swapping: \n");
    printf("x: %d, y: %d \n", x, y);

    return 0;
}

// using pointers to swap values of two variables
void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp; 
}