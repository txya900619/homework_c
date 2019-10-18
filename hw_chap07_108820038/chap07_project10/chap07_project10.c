/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose:算母音數量                                             */
/* Change History: 2019.10.18初打                                */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char input[100000];
    int count=0;//宣告變數

    printf("Enter a sentense: ");
    gets(input);//input

    strupr(input);//lower to upper

    for (int i = 0; i <=strlen(input);i++){
        if(input[i]=='\0'){
            break;
        }
        if(input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U'){
            count++;
        }//count vowels    
    }

    printf("Your sentence contains %d vowels.", count);//output
    return 0;
}
