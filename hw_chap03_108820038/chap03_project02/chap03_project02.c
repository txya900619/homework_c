/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 輸入資料 輸出排列後資料                                          */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int item_num,year,month,day;
    float unit_price; //宣告變數

    printf("Enter item mumber: ");
    scanf("%d", &item_num);//輸入item number

    printf("Enter unit price: ");
    scanf("%f", &unit_price);//輸入unit price

    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);//輸入日期

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%.2f\t\t%02d/%02d/%d",item_num,unit_price,month,day,year);//輸出資料
    return 0;
}
