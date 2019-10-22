/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.10 (put program development started date here   */
/* Purpose: 翻轉數字                                             */
/* Change History: 2019.10.15初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Digits reversed: ");
    
    do{
        printf("%d", num % 10);
        num /= 10;
    } while (num);
    printf("\n")


    return 0;
}
