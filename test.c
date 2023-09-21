#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    printf("Dice simulator \n");

    printf("Number: %d \n", rand() % 6);
}