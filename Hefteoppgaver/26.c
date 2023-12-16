/**
* Task 26 in GRPROG
 *
 * Task is to compare two dates entered by user
 * and use a function to check what date is the earliest
*/


#include "stdio.h"  // printf, scanf
#include "string.h" // strcmp


/**
 * Date (with day, month, year).
 */
struct Date {
    int day,
        month,
        year;
};

// Struct declarations
struct Date gDate;
struct Date gDate2;


// Function declaration
int cmpDate(const struct Date date, const struct Date date2);


/**
* Main Program starts here:
*/
int main(){
    int day,
        month,
        year;

    // Output First date
    printf("\tInput first date-->");
    printf("\n\tWrite day, month and year: ");
    scanf("%02d %02d %4d", &gDate.day, &gDate.month, &gDate.year);
    printf("\n\tEntered values: %02d-%02d-%4d\n", gDate.day, gDate.month, gDate.year);

    // Output Second date
    printf("\n\tInput second date-->");
    printf("\n\tWrite day, month and year: ");
    scanf("%02d %02d %4d", &gDate2.day, &gDate2.month, &gDate2.year);
    printf("\n\tEntered date: %02d-%02d-%4d", gDate2.day, gDate2.month, gDate2.year);


    int cmp = cmpDate(gDate, gDate2);

    if (cmp < 0){
        printf("\nThe last date is the earliest.");
    } else if (cmp > 0){
        printf("\nThe first date is the earliest.");
    } else {
        printf("\nThe dates are the same.");
    }


    return 0;
}


/**
* Comparing the two dates inputted, using ternary operator
 *
 * @param date - First entered date
 * @param date2 - Second entered date
 *
 * @author LunaMellow :)
*/
int cmpDate(const struct Date date, const struct Date date2){
    if (date.year < date2.year)
        return (date.year > date2.year) ? -1 : 1;
    if (date.month < date2.month)
        return (date.month > date2.month) ? -1 : 1;
    if (date.day < date2.day)
        return (date.day > date2.day) ? -1 : 1;

    // Since it does not return a value for all
    return 0;
}