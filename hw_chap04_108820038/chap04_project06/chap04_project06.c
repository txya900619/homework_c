/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.23 (put program development started date here   */
/* Purpose: 計算EAN檢查碼                                          */
/* Change History: 2019.09.23初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    char num[12];
    int odd_sum, even_sum,total;
    odd_sum = even_sum = 0;//宣告變數並歸0

    printf("Enter the first 12 digits of an EAN : ");
    scanf("%s", num);

    for (int i = 0; i <= 10;i+=2){
        odd_sum += num[i] - '0';
        even_sum += num[i + 1] - '0';
    }//將char轉為整數

    total = odd_sum + even_sum * 3;//加總

    printf("Check digit :%d\n", 10-(total % 10));//輸出

    return 0;
}
