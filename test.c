#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double scale(double inputNum, double power);

int main() {
    double inputNum = 6;
    
    printf("%lf\n", scale(inputNum, 3));

    return 0;
}

double scale(double inputNum, double power) {
    double result = inputNum * pow(10, power);

    return result;
}
