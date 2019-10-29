/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose: 轉換特定字母至數字                                     */
/* Change History: 2019.10.19 初打                               */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char input[10000]; //宣告變數

    printf("Enter phone number: ");
    scanf("%s", input);//input

    strupr(input);//lowercase to uppercase

    for (int i = 0; i < 10000;i++){
        if(input[i]=='\0'){
            break;
        }
        if(input[i]>='A'&&input[i]<'Q'){
            input[i] = '0'+(input[i]-'A') / 3 + 2;
        }else if(input[i]>'Q'&&input[i]<'Z'){
            input[i] = '0' + (input[i] - 'A' - 1) / 3 + 2;
        }
        
    }//轉換

    printf("%s\n", input);//output

    return 0;
}
