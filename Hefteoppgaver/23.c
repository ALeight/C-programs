/**
* Task 23 in GRPROG
*/

#include "stdio.h"      // printf, scanf
#include "ctype.h"      // toupper

int sumKvadrat(int tall, int tall2, int tall3){
    int resultA = tall * tall;
    int resultB = tall2 * tall2;
    int resultC = tall3 * tall3;

    printf("\t Result A: %i\n", resultA);
    printf("\tResult B: %i\n", resultB);
    printf("\tResult C: %i\n", resultC);


}

int main(){
    int t1, t2, t3;
    char yes;

    do {
        printf("Input three values: ");
        scanf(" %i %i %i", &t1, &t2, &t3);

        sumKvadrat(t1, t2, t3);

        printf("Do you want to run program again? (y/n): ");
        scanf(" %c", &yes);

    } while (toupper(yes == 'y'));

    return 0;
}