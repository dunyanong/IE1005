#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void diamond(int n);

int main() {
    int firstNum, secondNum, result;
    char operator;

    printf("Enter two numbers and an operator in the form number1 operator number2 (e.g. 4 - 2): ");
    scanf("%d %c %d", &firstNum, &operator, &secondNum);

    printf("The first number is %d\n", firstNum);
    diamond(firstNum);

    printf("The second number is %d\n", secondNum);
    diamond(secondNum);

    if (operator ==  '+')
        result = firstNum + secondNum;
    
    if (operator == '-') {
        result = firstNum - secondNum;
    }
    if (operator == '*') {
        result = firstNum * secondNum;
    }

    printf("%d %c %d is %d\n", firstNum, operator,secondNum, result);
    diamond(result);

    return 0;
}

void diamond(int n) {
    // upper part of diamond
    for (int i = 0; i < n; i++) {
        printf("/");
        printf("\\");
        printf(" ");
    }

    printf("\n");

    // lower part of diamond
    for (int i = 0; i < n; i++) {
        printf("\\");
        printf("/");
        printf(" ");
    }
    printf("\n");
}