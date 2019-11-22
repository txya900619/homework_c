/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void reduce(int num, int deno, int *reducesNum, int *reducesDeno) {
    int m, n, tmp;
    m = num;
    n = deno;
    while (n != 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    } //計算最大公因數
    *reducesNum = num / m;
    *reducesDeno = deno / m;
}
int main(void) {
    int num, deno; //宣告變數

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &deno); //輸入分數
    reduce(num, deno, &num, &deno);
    printf("The lowest terms: %d/%d\n", num, deno); //輸出最簡分數
    return 0;
}
