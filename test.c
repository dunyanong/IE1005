#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double price, total = 0.0;

    printf("Type 0 to quit: ");

    // do while loops will do at least once unlike normal while loops
    do {
        printf("New price = ");
        scanf("%lf", &price);
        
        total += price;
    } while (price != 0);

    printf("%lf\n", total);

}

// int main() {
//     double price, total = 0.0;

//     printf("Enter price (Type 0 to quit): ");

//     // do while loops will do at least once unlike normal while loops
//     while (price != 0)
//     {
//         total += price;
//         printf("Price = ");
//         scanf("%lf", &price);
//     }
    

//     printf("%lf\n", total);

// }