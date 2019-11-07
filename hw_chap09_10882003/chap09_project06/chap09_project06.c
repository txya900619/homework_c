/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose: 簡寫姓名                                             */
/* Change History: 2019.10.19初打                                */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
int polynomial(int num){
    return num*num*num*num*num*3+num*num*num*num*2-num*num*num*5-num*num+7*num-6;
}//circulate
int main(){
    int input;//declare variable

    printf("Enter an integer: ");
    scanf("%d",&input);//input

    printf("Result: %d\n",polynomial(input));//output

    return 0;
}
