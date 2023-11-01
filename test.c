#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void findPrimeFactors(int n) {
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 1) {
        printf("%d ", n);
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Prime factors are not defined for numbers less than 2.\n");
    } else {
        printf("Prime factors of %d are: ", num);
        findPrimeFactors(num);
        printf("\n");
    }

    return 0;
}
