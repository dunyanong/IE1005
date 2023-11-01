#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

// reverse integer
int main() {
    int inputNum = 0, remainder = 0, reverse = 0;
    printf("Input a number: ");
    scanf("%d", &inputNum);

    while (inputNum != 0)
    {
        remainder = inputNum % 10;

        reverse = reverse * 10;

        reverse = reverse + remainder;

        inputNum = inputNum / 10;
    }

    printf("%d", reverse);
    
}
