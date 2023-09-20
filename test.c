#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calculate_e(int n) {
    double result = 1.0;
    double x = 1.0;

    for (int i = 1; i < n; i++) {
        // x value still remain after assigning
        x *= 1.0 / i;

        // printf("x: %lf, i: %d\n", x, i);

        // confusion?
        result += x;
    }

    return result;
}

int main() {
    int n; // Number of terms in the Taylor series
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double e_approximation = calculate_e(n);
    printf("Approximation of e using %d terms: %.15f\n", n, e_approximation);

    return 0;
}






