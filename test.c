#include <stdio.h>
#include <ctype.h>

int main(void){
    char character;
    int value;

    printf("Enter character: ");
    scanf("%c", &character);

    value = islower(character);

    if (value == 0) {
        printf("The given character is not a lowercase letter\n");
        return 0;
    }
    
    printf("The given character IS a lowercase letter\n");
    return 0;
}