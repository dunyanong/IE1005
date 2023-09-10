/* program style.c for FE1008 hands-on          */
/* Name:                                      */
/* Group:                                     */
/* Date:                                      */

#include <stdio.h>
#define P_CONST 3.14159

int main(void){
    double radius, area, circumference;
    
    /* get the input */  
    printf("Enter the radius of the circle> ");
    scanf("%lf", &radius);   
    /* compute area and circumference */ 
    area = 2.0 * radius * P_CONST;
    circumference = P_CONST * radius * radius;       

    /* display the results */
    printf("radius of circle        = %.2f\n", radius);
    printf("area of circle          = %.2f\n", area);
    printf("circumference of circle = %.2f\n", circumference);
    
    return 0;
}