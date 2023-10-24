#include <stdio.h> 
#include <string.h> 
#include <math.h> 

int main(void) 
{
    double sincx, firstInput, secondInput,  x, totalInterval;

    printf("Enter endpoints a and b (a < b); e.g. -5 5: ");
    scanf("%lf %lf", &firstInput, &secondInput);

    // To divide them into intervals:
    totalInterval = secondInput - firstInput;

    double stepInterval = totalInterval / 20;

    printf("%12s%20s\n", "x", "sinc(x)");
    for (double x = firstInput; x < totalInterval; x += stepInterval){
        double sincx = sin(x) / x;

        printf("%15.6lf %15.6lf\n", x, sincx);
    }
}