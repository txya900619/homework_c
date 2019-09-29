/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.25 (put program development started date here   */
/* Purpose: 排序年月日                                            */
/* Change History: 2019.09.25初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int month[2], day[2], year[2],ans;
    ans = 0;//宣告變數

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month[0], &day[0], &year[0]);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month[1], &day[1], &year[1]);//輸入年月日

    if(year[0]>year[1]){
        ans = 1;
    }else if(year[0] == year[1]){
        if(month[0]>month[1]){
            ans = 1;
        }else if(month[0]==month[1]){
            if(day[0]>day[1]){
            ans = 1;
            }
        }
    }//排序

    printf("%d/%d/%02d is earlier than %d/%d/%02d", month[ans], day[ans], year[ans], month[!ans], day[!ans], year[!ans]);//輸出
    return 0;
}
