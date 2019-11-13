/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.07 (put program development started date here   */
/* Purpose: sort                                                */
/* Change History: 2019.11.07 初打                               */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>

void selection_sort(int pos,int a[]){
    int max =-2147483648,tmp,count;
    if(pos==0){
        return;
    }
    for(int i =0;i<pos;i++){
        if(a[i]>max){
            max = a[i];
            count = i;
        }
    }
    tmp = a[pos-1];
    a[pos-1]=max;
    a[count]=tmp;
    return selection_sort(pos-1,a);
}//sort

int main(void){

    int a[100],count,test=0;//declare variable

    printf("Enter list of integers to be sorted: ");
    for (int i= 0;i<100&&test!='\n';i++){
        scanf("%d",&a[i]);
        test =getchar();
        count = i+1;
    }//input

    selection_sort(count,a);//call function

    printf("Sorted list:");
    for (int i = 0; i < count; i++){
        printf(" %d",a[i]);
    }
    printf("\n");//output

    return 0;
}

