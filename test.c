#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int istriangle(double a, double b, double c);
double areatri(double a, double b, double c);

int main() {
    double a, b, c;
    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);  

    if (istriangle(a, b, c) == 0) {
        printf("Not a valid triangle\n");
        return 1;
    } else {
        printf("Area of triangle: %lf\n", areatri(a, b, c));
    }

    return 0;
}
int istriangle(double a, double b, double c)  {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }

    return 1;
}

double areatri(double a, double b, double c) {
    double s = (a + b + c) * 0.5;

    double area = sqrt(s*(s-a) * (s-b) * (s-c));

    return area;
}