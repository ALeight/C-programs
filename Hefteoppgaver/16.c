/**
* Task 16 in GRPROG
*/


#include <stdio.h>  // printf, scanf
#include <ctype.h>  // toupper, isalpha


const int MIN = 1;
const int MAX = 10000;


int main(){
    int a[5];
    char b[10];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter integer between %i and %i: ", MIN, MAX);
        scanf(" %i", &a[i]);

        if (a[i] < MIN || a[i] > MAX) {
            printf("\nError. Please reenter integer in range %i - %i.\n", MIN,MAX);
            i--; // Decrement current iteration as an invalid number entered
        }
    }

    // Printing accepted values
    printf("\nEntered integers: \n");
    for (int i = 0; i < 5; i++){
        printf(" %i ", a[i]);
    }

    // Accepting letters
    for (int i = 0; i < 10; i++){
        printf("\nEnter letters, one at a time: \n");
        scanf(" %c", &b[i]);


        if (!isalpha(b[i])){
            printf("\nOnly accepted letters (a-z) or (A-Z).");
            i--; // Decrement current iteration as an invalid letter has been entered
        }
    }

    // Printing every inputted letter
    printf("\nEntered letters: ");
    for (int i = 0; i < 10; i++){
        printf(" %c ", toupper(b[i]));
    }

    return 0;
}

