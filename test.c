#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main() {
    int p[3][3] = {
        {1, 3, -4}, 
        {1, 1, -2}, 
        {-1, -2, 5}
    };
    int q[3][3] = {
        {8, 3, 0}, 
        {3, 10, 2}, 
        {0, 2, 6}
    };
    int r[3][3];

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            r[i][j] = 0;  // Initialize the result element to 0
            for (int k = 0; k < 3; k++) {
                r[i][j] += p[i][k] * q[k][j];
            }
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}