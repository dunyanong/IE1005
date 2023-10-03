#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double repay(int n);

int main() {
    // n = 12
    double month = 12;
    printf("repayment at the end of a year for MONTHLY case: %lf\n", repay(month));

    // n = 365
    double day = 365;
    printf("repayment at the end of a year for DAILY case: %lf\n", repay(day));

    return 0;
}
double repay(int n) {
    double sum = 1.0;
    double P = 2.0;
    for (double i = 1.0; i <= n; i++) {
        sum = sum*(1 + i/n);
    }

    return sum;
}