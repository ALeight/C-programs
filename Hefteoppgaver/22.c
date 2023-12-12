/**
* Task 22 in GRPROG
*/

#include "stdio.h"

void makeSquare(int width, int height){
    if (width == 0 || height == 0){
        printf("Invalid values for width or height.\n");
        return;
    }

    // Loop through each row
    for (int i = 0; i < width; i++){
        // Loop through each column
        for (int j = 0; j < height; j++){
            // Check if corner position
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1){
                printf("*");
            } else {
                printf(" "); // Blank space to fill in middle
            }

            // Added blank space to make asterix adjacent at edges
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    makeSquare(6,6);

    return 0;
}