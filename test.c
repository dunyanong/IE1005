#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    
    // Use getchar() to read a single character/ first character of a string
    ch = getchar();
    
    // Display the character
    printf("You entered: %c\n", ch);

    return 0;
}