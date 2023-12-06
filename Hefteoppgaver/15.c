/**
* Task 15 in GRPROG
 *
 * Program to read two integers, output those integers added,
 * subtracted and multiplied.
 * After first iteration done, ask user if program is to be run again
*/


#include "stdio.h"     // printf, scanf
#include "ctype.h"     // tolower


int main(){

    int num1, num2, answer;
    char choice;

    do {
        printf("Input two numbers: ");
        scanf(" %i %i", &num1, &num2);

        answer = num1 + num2;
        printf("\n%i + %i = %i", num1, num2, answer);

        answer = num1 * num2;
        printf("\n%i * %i = %i", num1, num2, answer);

        // To avoid a negative integer
        if (num1 < num2) {
            answer = num2 - num1;
            printf("\n%i - %i = %i", num2, num1, answer);
        } else {
            answer = num1 - num2;
            printf("\n%i - %i = %i", num1, num2, answer);
        }

        printf("\nDo you want to run program again? (Y/n)");
        scanf(" %c", &choice);

        choice = tolower(choice);

    } while (choice == 'y');

    return 0;
}
