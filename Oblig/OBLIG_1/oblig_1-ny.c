#include<stdio.h>
#include<stdlib.h>

const int STRLEN = 20;

int main() {

    int maalA, maalB, poengA, poengB;
    int tallA[20], tallB[20];                   ///< to int-arrayer
    char navnA[STRLEN], navnB[STRLEN];      ///< to char-arrayer
    char tegn;

    printf("1. lag er: "); gets(navnA);              ///< lagrer svaret til bruker i array navnA

    printf("2. lag er: "); gets(navnB);


    printf("Lagene du har tastet inn er: %s og %s", navnA, navnB);



return 0;
}
