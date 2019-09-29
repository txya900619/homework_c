/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.23 (put program development started date here   */
/* Purpose: 10位數轉8位數                                          */
/* Change History: 2019.09.23初打                                */
/*****************************************************************/
#include <stdio.h>
#include <math.h>
int main(void){
    int num, ans;//宣告變數
    ans = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);//輸入數字

    for (int i = 0; i <=4; i++){
        ans += num % 8 * pow(10, i);
        num /= 8;
    }//將數字轉為八位數

    printf("In octal, your number is: %05d", ans);//輸出

    return 0;
}
