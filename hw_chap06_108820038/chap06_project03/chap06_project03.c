/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.10 (put program development started date here   */
/* Purpose:找出最簡分數                                          */
/* Change History: 2019.10.10初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num, deno,m,n,tmp;//宣告變數
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &deno);//輸入分數

    m = num;
    n = deno;
    while(n!=0){
        tmp = m % n;
        m = n;
        n = tmp;
    }//計算最大公因數

    printf("The lowest terms: %d/%d", num / m, deno / m);//輸出最簡分數
    return 0;
}
