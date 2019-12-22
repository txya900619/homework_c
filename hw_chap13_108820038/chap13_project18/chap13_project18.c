/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 輸入資料 輸出排列後資料                                          */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void) {
    int year, month, day;
    char *month_en[12] = {"January", "February", "March", "April", "May", "June", "July",
                          "August", "September", "October", "November",
                          "December"};
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); //輸入日期

    printf("You entered the date %s %.2d, %d", month_en[month - 1], day, year); //輸出資料
    return 0;
}
