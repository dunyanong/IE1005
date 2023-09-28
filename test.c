// Write a C program that performs addition and subtraction of capital letters within the boundaries of the alphabetical series. A example is shown below
// For addition 'A' + 'B', 'A' will be shifted 66 forward because the ascii value of b is 66. The answer will be O
// For subtraction 'A' - 'B', 'A' will be shifted 66 backward because the ascii value of b is 66. The answer will be M
// Solve it

#include <stdio.h>
#include <ctype.h>

char additionFunction(char first_letter, char second_letter);
char subtractionFunction(char first_letter, char second_letter);

int main() {
    char first_letter, second_letter;

    printf("Enter the first capital letter: ");
    scanf(" %c", &first_letter);

    printf("Enter the second capital letter: ");
    scanf(" %c", &second_letter);

    // Check if the input letters are valid capital letters (A-Z)
    if (first_letter < 'A' || first_letter > 'Z' || second_letter < 'A' || second_letter > 'Z') {
        printf("Please enter valid capital letters (A-Z).\n");
        return 1;
    }

    // Perform addition
    char addition_result = additionFunction(first_letter, second_letter);

    // Perform subtraction
    char subtraction_result = subtractionFunction(first_letter, second_letter);

    printf("Addition: %c + %c = %c\n", first_letter, second_letter, addition_result);
    printf("Subtraction: %c - %c = %c\n", first_letter, second_letter, subtraction_result);

    return 0;
}

// Done
char additionFunction(char first_letter, char second_letter) {
    // Perform addition
    char addition_result = first_letter + (second_letter % 26);

    return addition_result;
}

char subtractionFunction(char first_letter, char second_letter) {
    // Perform subtraction
    char subtraction_result = first_letter + 26 - (second_letter % 26);
    return subtraction_result;
}