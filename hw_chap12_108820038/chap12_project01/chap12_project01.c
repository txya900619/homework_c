/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.12.8 (put program development started date here   */
/* Purpose: reverse string                                      */
/* Change History: 2019.12.8 初打                               */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    char message[100];
    char in,*m=message;
    int i=0;//declare variable

    printf("Enter a message: ");
    while ((*m=getchar())!='\n'){
        m++;
    }//get string
    
    printf("Reaversal is: ");
    while (m!=message){
        printf("%c",*(--m));
    }
    printf("\n");//output

    return 0;
}
