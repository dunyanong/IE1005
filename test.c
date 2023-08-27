#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    // convert celsius to fahrenheit:
    double endCelsius = 100, step = 1;

    printf("Celsius ---> Fahrenheit \n");
    for (double startCelsius = 0; startCelsius < endCelsius + 1; startCelsius+=step) {
        double F = (startCelsius * 1.8) + 32;
        printf("%lf ---> %lf \n", startCelsius, F);
    }


    return 0;
}