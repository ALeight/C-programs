/**
* Task 19
*/

#include "stdio.h"

int main() {
    int a[20];
    int b[5] = {0}; // Initialize all counts to 0
    int ranges[] = {20, 40, 60, 80, 100};

    for (int i = 1; i < 20; i++){
        do {
            printf("Enter a number in interval (1-100): ");
            scanf(" %i", &a[i]);

            if (a[i] < 0 || a[i] > 100){
                printf("\nError. Number not in interval (1-100).\n");
            }

            // Consume newline character in buffer
            getchar();

        } while (a[i] < 1 || a[i] > 100);

        // Categorizing the numbers into different ranges
        for (int j = 0; j < 5; j++){
            if (a[i] <= ranges[j]){
                b[j]++;
                break; // Breaking loop after categorizing the number
            }
        }
    }

    // Display counts for each range
    printf("\nNumber of integers in each range: \n");
    for (int i = 0; i < 5; i++){
        printf("Range %i-%i: %i\n", (i * 20) + 1, ranges[i], b[i]);
    }


    return 0;
}
