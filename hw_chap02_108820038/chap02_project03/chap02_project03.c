/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.18 (put program development started date here   */
/* Purpose: 計算圓周率                                            */
/* Change History: 2019.09.18初打                                */
/*****************************************************************/
#include <stdio.h>
#define pi 3.1415926
#include <math.h>
int main(void){
    int r = 0;//定義半徑變數
    printf("Enter radius: ");
    scanf("%d",&r);//要求使用者輸入半徑 存入變數r

    printf("\nSphere volume: %.2f cubic meters\n", 4.0f / 3.0f * pi * pow(r, 3));//輸出體積
    return 0;
}
