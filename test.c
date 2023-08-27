#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    // fibonacci algorithmn

    int initialNumber = 0, secondNumber = 1, result = 0, numOfTerms;

    printf("Number of terms: ");
    scanf("%d", &numOfTerms);


    printf("Number of fibonacci numbers: %d  \n", numOfTerms);
    for (int i = 0; i < numOfTerms; i++) {
        printf("%d\n", initialNumber);
        result = initialNumber + secondNumber;
        initialNumber = secondNumber;
        secondNumber = result;
    }

    return 0;
}