/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 計算圓體積                                            */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
#include <math.h>
int main(void){

    int x = 0;//定義變數

    printf("Enter value for x: ");
    scanf("%d", &x);//輸入x值

    printf("Result: %.02f\n", 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6);//輸出計算結果
    return 0;
}
