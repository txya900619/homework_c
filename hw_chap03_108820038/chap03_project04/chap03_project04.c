/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 輸入電話號碼 改格式輸出                                           */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int area_code, prefix, number;//宣告變數

    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d",&area_code, &prefix, &number);//輸入電話號碼

    printf("You entered %d.%d.%d", area_code, prefix, number);

    return 0;
}
