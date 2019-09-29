/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 計算分數相加                                          */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num1, denom1, num2, denom2, anser_num, anser_denom;//宣告變數

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);//輸入兩個分數的分母與分子

    anser_denom = denom1 * denom2;
    anser_num = num1 * denom2 + num2 * denom1;//計算答案

    printf("The sum is %d/%d",anser_num,anser_denom );//輸出結果

    return 0;
}
