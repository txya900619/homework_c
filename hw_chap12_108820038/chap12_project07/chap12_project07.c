/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: stack                                                */
/* Change History: 2019.11.22 初打                               */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void max_min(int *p,int n,int *max,int *min){
    int *pin;
    *max=*min=*p;
    for(pin=p;pin<(p+10);pin++){
        if(*pin>*max){
            *max=*pin;
        }else if(*pin<*min){
            *min=*pin;
        }

    }
}//function to find max and min
int main(void) {
    int b[10],i,max,min;//declare variable

    printf("Enter 10 numbers : ");
    for ( i = 0; i < 10; i++){
        scanf("%d",(b+i));
    }//input

    max_min(b,10,&max,&min);//call function

    printf("Largest : %d\n",max);
    printf("Smallest : %d\n",min);//output

    return 0;
}
