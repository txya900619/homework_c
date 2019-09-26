/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.23 (put program development started date here   */
/* Purpose: 將百位數與十位數與個位數倒過來                          */
/* Change History: 2019.09.23初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num;//宣告變數

    printf("Enter a three-digit number: ");
    scanf("%d", &num);//輸入二位數字

    printf("The reversal is: %d%d%d\n", num %100% 10, num % 100/10,num/100);//輸出相反數

    return 0;
}
