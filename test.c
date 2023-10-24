#include <stdio.h>
#define N 1000

double funct(double x);
double a, b, c, d;

int main(void)
{
    double integral = 0.0;
    double p, q;
    double firstX, secondX;

    printf("Enter coefficient of a b c d: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    printf("Enter lower and higher boundary limits p and q: ");
    scanf("%lf %lf", &p, &q);

    firstX = p;
    double step = (q-p)/N;

    for (int i = 0; i < N; i++)
    {
        secondX = firstX + step;

        integral += 0.5 * (funct(firstX) + funct(secondX)) * (secondX - firstX);
        firstX = secondX;
    }

    printf("Ans: %lf\n", integral);

}

// return y value
double funct(double x)
{
    return (a*x*x*x) + (b*x*x) + (c*x) + d;
}