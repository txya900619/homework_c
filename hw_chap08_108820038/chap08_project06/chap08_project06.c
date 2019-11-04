/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.29 (put program development started date here   */
/* Purpose: reverse sentence to B1FF                             */
/* Change History: 2019.10.29 初打                               */
/*****************************************************************/
#include <stdio.h>

#include<string.h>
#include<ctype.h>
int main(void){
    char input[100];
    int pos;//declare variable
    printf("Enter message: ");
    fgets(input,100,stdin);//input

    pos = strlen(input);//get string length

    for(int i = 0 ; i<pos;i++){
        input[i]=toupper(input[i]);
    }//toupper

    char ans[pos];//declare ans

    for(int i=0;i<pos;i++){
        switch (input[i])
        {
        case 'A':
            ans[i]='4';
            break;
        case 'B':
            ans[i]='8';
            break;
        case 'E':
            ans[i]='3';
            break;
        case 'I':
            ans[i]='1';
            break;
        case 'O':
            ans[i]='0';
            break;
        case 'S':
            ans[i]='5';
            break;
        case '\n':
            ans[i]='\0';
            break;
        default:
            ans[i]=input[i];
            break;
        }
    }//change string

    printf("In B1FF-speak: %s!!!!!!!!!!\n",ans);//output

    return 0;
}

