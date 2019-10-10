/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.10 (put program development started date here   */
/* Purpose: 找最大值                                              */
/* Change History: 2019.10.10初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    float ans=0,tmp;//宣告變數
    
    while (1){
        printf("Enter a number:");
        scanf("%f", &tmp);
        if(tmp<=0){
            break;
        }else if(ans<tmp){
            ans = tmp;
        }

    }//輸入並找出最大
    
    printf("\nThe largest number entered was %g", ans);//輸出答案

    return 0;
}
