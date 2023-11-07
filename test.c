#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main() {
    int n[10] = {18, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    printf("Histogram\n");
    printf("Element      Value          Histogram\n");    

    for (int i = 0; i < sizeof(n)/sizeof(n[0]); i++) {
        printf("%7d %10d          ", i, n[i]);
        for (int j = 0; j < n[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}