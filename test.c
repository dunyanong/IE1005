#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

    char stringTest[] = "abcdcba";

    char failureCase[] = "fjerjwgfjergbfe";
    
    // sizeof(stringTest) / sizeof(stringTest[0]) will not work because it is not integer array due to \0 in string array
    int start = 0, end = strlen(stringTest) - 1;

    while (start < end) {
        if (stringTest[start] != stringTest[end]) {
            printf("Sentence cannot be reflected\n");
            return 0;
        }
        start++;
        end--;
    }
    printf("Sentence can be reflected \n");
    return 0;


}