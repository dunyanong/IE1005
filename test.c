#include <stdio.h>
#include <math.h>

int main(void) {
    double V, I, R1, R2, R3;

    printf("Enter the voltage:");
    scanf("%lf", &V);

    printf("Enter the R1:");
    scanf("%lf", &R1);

    printf("Enter the R2:");
    scanf("%lf", &R2);

    printf("Enter the R3:");
    scanf("%lf", &R3);

    I = V / (R1 + R2 + R3);

    printf("The current is %lf \n", I);
    
    return 0;
}