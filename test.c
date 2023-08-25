#include <stdio.h>
#include <math.h>

int main(void) {
    int X, x, sum;
    
    printf("Enter the value of X:");
    scanf("%d", &X);

    printf("Enter the value of x:");
    scanf("%d", &x);
    sum = X + x;
    printf("The sum of %d and %d is %d\n", X, x, sum);
    
    return 0;
}