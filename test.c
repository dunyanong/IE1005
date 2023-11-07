#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5};
    int temp[10] = {1, 2, 3, 4, 5};

    int max = a[0];
    int secondMax = a[0];

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // to remove the largest element
    for (int j = 0; j < sizeof(temp)/sizeof(temp[0]); j++){
        if (temp[j] == max) {
            temp[j] = 0;
            break;
        }
    }    

    for (int i = 0; i < sizeof(temp)/sizeof(temp[0]); i++)
    {
        if (temp[i] > secondMax) {
            secondMax = temp[i];
        }
    }

    printf("max: %d\n", max);
    printf("second max: %d\n", secondMax);

    return 0;
}