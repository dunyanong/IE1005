#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, root1, root2;

    printf("value of a: \n");
    scanf("%lf", &a);

    if (a == 0) {
        printf("Please input a non zero value of a \n");
        return 1;
    }

    printf("value of b: \n");
    scanf("%lf", &b);

    printf("value of c: \n");
    scanf("%lf", &c);

    double discriminant = b*b - 4*a*c;

    if (discriminant < 0) {
        printf("The roots are not real.");
        return 1;
    }

    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);

    printf("The roots are %lf and %lf \n", root1, root2);
    return 0;
}