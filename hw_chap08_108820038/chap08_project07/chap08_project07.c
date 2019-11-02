/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.29 (put program development started date here   */
/* Purpose: sum row and column                                   */
/* Change History: 2019.10.29 初打                               */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    int arr[5][5];
    int ans[5];//declare variable

    for(int i = 0 ;i<5;i++){
        printf("Enter row %d: ",i+1);
        for(int j = 0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }//input

    printf("Row totals: ");
    for(int i = 0 ;i<5;i++){
        int total1 = 0,total2=0;
        for(int j = 0;j<5;j++){
            total1+=arr[i][j];
            total2+=arr[j][i];
        }
        printf("%d ",total1);
        ans[i]=total2;
    }//sum and output

    printf("\nColumn totals: ");
    for(int i = 0;i<5;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");//output

    return 0;
}
