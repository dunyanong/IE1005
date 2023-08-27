#include <stdio.h>
#include <math.h>
#include <string.h>

int fibonacciRecursive(int n);

int main(void) {
    // fibonacci recursive algorithmn

    int initialNumber = 0, secondNumber = 1, result = 0, numOfTerms;

    printf("Number of terms: ");
    scanf("%d", &numOfTerms);


    printf("Number of fibonacci numbers: %d  \n", numOfTerms);
    for (int i = 0; i < numOfTerms; i++) {
        printf("%d\n", fibonacciRecursive(i));
        
    }

    return 0;
}

int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}