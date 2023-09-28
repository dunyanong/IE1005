#include <stdio.h>
#include <ctype.h>

int main() {
    char first_letter, second_letter;
    int shift = 66;

    printf("Enter the first capital letter: ");
    fflush(stdin);
    first_letter = getchar();

    printf("Enter the second capital letter: ");
    fflush(stdin);
    second_letter = getchar();

    if (first_letter < 'A' || first_letter > 'Z' || second_letter < 'A' || second_letter > 'Z') {
        printf("Please enter valid capital letters (A-Z).\n");
        return 1;
    }

    // Perform addition
    char addition_result = ((first_letter - 'A') + (second_letter - 'A') + shift - 1) % 26 + 'A';

    // Perform subtraction
    char subtraction_result = ((first_letter - 'A') - (second_letter - 'A') + shift - 1) % 26 + 'A';

    printf("Addition: %c + %c = %c\n", first_letter, second_letter, addition_result);
    printf("Subtraction: %c - %c = %c\n", first_letter, second_letter, subtraction_result);

    return 0;
}
