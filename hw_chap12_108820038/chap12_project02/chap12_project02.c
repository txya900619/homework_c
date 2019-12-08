/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker                                                */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char msg[80],c,*left=msg,*right=msg;//declare variable

    printf("Enter a message: ");
    while(right<&msg[80]){
        if((c=getchar())=='\n'){
            break;
        }
        if(c>'A'&&c<'Z'){
            *right++=c;
        }
        if (c>'a'&&c<'z'){
            *right++='A'+c-'a';
        }
    }//input

    right--;
    while (left<right){
        if(*left!=*right){
            break;
        }
        left++;
        right--;
    }//test it is Palindrome or not

    if (left>=right){
        printf("Palindrome\n");
    }else{
        printf("Not a palinfrome\n");
    }//output

    return 0;
}