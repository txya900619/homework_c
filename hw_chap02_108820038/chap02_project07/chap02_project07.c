/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 計算銅幣數量                                            */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int money = 0;//定義變數money

    printf("Enter a doller amount: ");
    scanf("%d", &money);//輸入money

    printf("$20 bills: %d\n", money / 20);
    money = money % 20;//輸出20塊錢的總數 並取money除以20的餘數

    printf("$10 bills: %d\n", money / 10);
    money = money % 10;//輸出10塊錢的總數 並取money除以10的餘數

    printf("$5  bills: %d\n", money / 5);
    money = money % 5;//輸出5塊錢的總數 並取money除以5的餘數

    printf("$1  bills: %d\n", money);//輸出1塊錢的總數
    return 0;
}
