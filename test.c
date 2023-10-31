#include <stdio.h>

int isPrime(int number);

int main() {
    // check prime number within a range
    int minimum;
    int maximum;

    printf("Minimum: ");
    scanf("%d", &minimum);

    printf("Maximum: ");
    scanf("%d", &maximum);

    for (int num = minimum; num < maximum; num++)
    {
        if (!isPrime(num))
            printf("%d\n", num);
    }

    return 0;
}

int isPrime(int number){
    if (number == 0 || number == 1) {
        // return false
        return 1;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            // return false
            return 1;
        }
    }

    // return true;
    return 0;
}