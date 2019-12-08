/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>
#include <string.h>
int main(void){
    char ans[100][100],(*p)[100]=ans;
    int count =0;
    char last;//declare variable

    printf("Enter a sentence: ");
    while(1){
        char a[100],*pin=a,*anow;
        int num = 0;
        int jump=0;
        scanf("%s",a);
        num = strlen(a)-1;
        anow=pin+num;
        if (*anow=='!'||*anow=='?'||*anow=='.'){
        
            last =*anow;
            num-=1;
            jump=1;
        }
        for(int i = 0;i<=num;i++){
            *(*(p+count)+i)=*(a+i);
        }
        count++;
        if(jump){
            break;
        }

    }//input and save in array

    printf("Reversal of sentence:");
    for(int i = count-1 ;i>=0;i--){
        printf(" %s",*(p+i));
    }
    printf("%c\n",last);//reverse and output

    return 0;
}

