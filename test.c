#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main() {
    int rows;

    // pyramid
    printf("Number of rows: ");
    scanf("%d", &rows);

    // number of rows
    for (int i = 1; i <= rows; i++)
    {
        // number of columns
        for (int j = 1; j <= (2 * rows - 1); j++){
            if ((j >= rows - (i - 1)) &&  (j <= rows + (i - 1)))
            {
                printf("*");
            } else  {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
