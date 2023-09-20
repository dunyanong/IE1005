#include <stdio.h>

int main() {
    int height, width;

    // Input height and width from the user
    printf("Enter two integers for height and width: ");
    scanf("%d %d", &height, &width);

    // Iterate through each row (height)
    for (int heightCounter = 0; heightCounter < height; heightCounter++) {
        // Print the top and bottom lines
        if (heightCounter == 0 || heightCounter == height - 1) {
            for (int widthCounter = 0; widthCounter < width; widthCounter++) {
                printf("=");
            }
            printf("\n");
        } else {
            // Print the left and right borders
            printf("*");
            for (int widthCounter = 2; widthCounter < width; widthCounter++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}



// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int height, width;

//     printf("Enter two integers for height and width: ");
//     scanf("%d %d", &height, &width);

//     int newHeight = height;
//     int newWidth = width;
    
//     for (int heightCounter = 2; heightCounter < newHeight; heightCounter++) {
//             if (heightCounter == 2) {
//                 for (int widthCounter = 0; widthCounter < newWidth; widthCounter++) {
//                     printf("=");
//                 }
//                 printf("\n");
//             }

//             if (heightCounter != height - 1 || heightCounter != 0) {
//                 for (int k = 0; k < newWidth; k++) {
//                     if (k == 0) {
//                         printf("*");
//                     } else if (k == newWidth - 1) {
//                         printf("*\n");
//                     } else {
//                         printf(" ");
//                     }
//                 }
//             }

//             if (heightCounter == (height - 1)) {
//                 for (int widthCounter = 0; widthCounter < newWidth; widthCounter++) {
//                     printf("=");
//                 }
//                 printf("\n");
//             }                          
//     }
//     printf("\n");
// }
