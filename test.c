#include <stdio.h>
#include <math.h>

int main(void){
    double degrees,radians, length_a, length_b, length_c;
    printf("Enter the angle in degrees :");
    scanf("%lf",&degrees);

    radians = 0.0174532925*degrees;

    printf("Enter length a :");
    scanf("%lf",&length_a);

    printf("Enter length b :");
    scanf("%lf",&length_b);

    length_c = sqrt(length_a * length_a + length_b * length_b -(2 * length_a * length_b * cos(radians)));


    printf("length c is: %lf\n", length_c);

    

    return 0;
}