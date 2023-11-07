#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void print_array(int a[], int arraysize);
int max_array(const int a[], int arraysize);

int main() {
    int a[10] = {1,2, 0, 0, 4, 5, 6, 9, 9, 17};

    print_array(a, sizeof(a)/sizeof(a[0]));

    printf("Max Value: %d\n", max_array(a, sizeof(a)/sizeof(a[0])));
    
    return 0;
}

void print_array(int a[], int arraysize){
    printf("{");

    for (int i = 0; i < arraysize; i++)
    {
        if(i == arraysize - 1) {
            printf("%d", a[i]);
        } else {
            printf("%d, ", a[i]);
        }
    }

    printf("}\n");
}

int max_array(const int a[], int arraysize){
    int max = a[0];
    for (int i = 0; i < arraysize; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}