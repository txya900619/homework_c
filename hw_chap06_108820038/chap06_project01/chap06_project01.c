/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.10 (put program development started date here   */
/* Purpose: 找最大值                                              */
/* Change History: 2019.10.12改atof                               */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char ans[60], input[60]; //宣告變數
    double inputNum;
    while (1){
        printf("Enter a number:");
        scanf("%s", input);
        inputNum = atof(input);
        if(inputNum<=0){
            break;
        }else if(atof(ans)<inputNum){
            strcpy(ans,input);
        }

    }//輸入並找出最大
    
    printf("\nThe largest number entered was %s", ans);//輸出答案

    return 0;
}
