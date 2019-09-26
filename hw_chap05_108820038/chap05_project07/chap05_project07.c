/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.23 (put program development started date here   */
/* Purpose: 輸入4個值指出最大最小                                  */
/* Change History: 2019.09.23初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num[4],max,min;//宣告變數

    printf("Enter four integers: ");
    for (int i = 0; i < 4;i++){
        scanf("%d", &num[i]);
    }//輸入數字到陣列

    max = min = num[0];
    for (int i = 1; i < 4;i++){
        if(max<num[i]){
            max = num[i];
        }
        if(min>num[i]){
            min = num[i];
        }
    }//找出最大最小

    printf("Largest: %d\nSmallest: %d\n", max, min);//輸出

    return 0;
}
