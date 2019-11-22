/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: stack                                                */
/* Change History: 2019.11.22 初打                               */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100 //max stack
void payMoney(int money, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = money / 20;
    money = money % 20; //取money除以20的餘數
    *tens = money / 10;
    money = money % 10; //取money除以10的餘數
    *fives = money / 5;
    money = money % 5; //取money除以5的餘數
    *ones = money;
}
int main(void) {
    int money = 0; //定義變數money
    int twenties, tens, fives, ones;
    printf("Enter a doller amount: ");
    scanf("%d", &money); //輸入money
    payMoney(money, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n", twenties); //輸出20塊錢的總數
    printf("$10 bills: %d\n", tens);     //輸出10塊錢的總數
    printf("$5  bills: %d\n", fives);    //輸出5塊錢的總數
    printf("$1  bills: %d\n", ones);     //輸出1塊錢的總數
    return 0;
}
