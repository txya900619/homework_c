/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>

struct date {
    int month, day, year;
};
//declare struct
int compare_dates(struct date d1, struct date d2) {
    if (d1.year != d2.year) {
        return (d1.year < d2.year) ? -1 : 1;
    }
    if (d1.month != d2.month) {
        return (d1.month < d2.month) ? -1 : 1;
    }
    if (d1.day != d2.day) {
        return (d1.day < d2.day) ? -1 : 1;
    }
    return 0;
}
//compare function
void put_date(struct date d) {
    printf("%d/%d/%.2d", d.month, d.day, d.year);
}
//output function
int main(void) {
    struct date d1, d2;
    //declare variable
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
    //input
    if (compare_dates(d1, d2) < 0) {
        put_date(d1);
        printf(" is earlier than ");
        put_date(d2);
        printf("\n");
    } else {
        put_date(d2);
        printf(" is earlier than ");
        put_date(d1);
        printf("\n");
    }
    //output
    return 0;
}
