/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose: 簡寫姓名                                             */
/* Change History: 2019.10.19初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    char first[60], last[60];//宣告變數

    printf("Enter a first and last name: ");
    scanf("%s", first);
    scanf("%s", last);//input

    printf("%s, %c.", last, first[0]);//output
    return 0;
}
