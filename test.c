#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    char stringTest[] = "Iphone";
    int vowelCount = 0;

    for (int i = 0; i < strlen(stringTest); i++) {
        if (stringTest[i] == 'a' || stringTest[i] == 'e' || stringTest[i] == 'i' || stringTest[i] == 'o' || stringTest[i] == 'u' || stringTest[i] == 'A' || stringTest[i] == 'E' || stringTest[i] == 'I' || stringTest[i] == 'O' || stringTest[i] == 'U') {
            vowelCount++;
        }
    }
    printf("Number of vowel count is: %i \n", vowelCount);

    return 0;
}