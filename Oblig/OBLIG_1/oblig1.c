/**
* OBLIG 1
*
*
* @file OBLIG_1
* @author Bendik S. Kristoffersen
*/

#include<stdio.h>                ///< printf og scanf
#include<string.h>

const int STRLEN = 20;              ///< max. tekstlengde


int main() {

    int maalA, maalB, poengA, poengB;
    int tallA[10], tallB[10];           ///< to int-arrays med størrelse 10
    char navnA[STRLEN], navnB[STRLEN];  ///< to char-arrays som er 'STRLEN' lange

    printf("1. lag er: ");  gets(navnA);      ///< venter på 'ENTER', og går videre til neste linje
    scanf("%c", &navnA);

    printf("2. lag er: ");  gets(navnB);
    scanf("%c", navnB);

    getchar();

    printf("Lagene du har tastet inn er: \n%s og %s", navnA,navnB);


return 0;
}
