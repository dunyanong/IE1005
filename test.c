#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    double num1, num2, result;
    char operator;

    printf("Enter two numbers and an operator in the form number1 operator number2: ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // if (operator == '+') {
    //     result = num1 + num2;
    // } else if (operator == '-') {
    //     result = num1 - num2;
    // } else if (operator == '*' || operator == 'x' || operator == 'X') {
    //     result = num1 * num2;
    // } else if (operator == '/') {
    //     result = num1 / num2;
    // }

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;  
        case '*':
            result = num1 * num2;
            break;   
        case '/':
            result = num1 / num2;
            break;                               
        default:
            break;
    }

    printf("%lf %c %lf is %lf \n", num1, operator, num2, result);

    return 0;
}
