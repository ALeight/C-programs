/**
* Task 21 in GRPROG
 *
 * Time function
*/

#include "stdio.h"  // printf, scanf

void writeTime (int hour, int min, int sec){
    // Add zero in front
    printf("%02i:%02i:%02i\n", hour, min, sec);

    // Calculate total amount of seconds
    int totalSec = hour * 3600 + min * 60 + sec;
    printf("Total seconds in time entered: %i\n", totalSec);
}

int main(){

    writeTime(1,45,06);

    writeTime(14,13,06);

    return 0;
}

