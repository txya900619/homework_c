/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 計算稅                                                */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>

int main(void){
    float money;//宣告函數

    printf("Enter an amount: ");
    scanf("%f", &money);//輸入錢

    printf("With tax added: $%.2f\n", money * 1.05);//輸出加過稅的價錢

    return 0;
}
