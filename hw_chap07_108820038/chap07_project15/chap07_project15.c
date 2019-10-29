/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.10 (put program development started date here   */
/* Purpose: 1*1/1!*1/2!....1/n!                                  */
/* Change History: 2019.10.15初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num;//宣告變數

    printf("Enter a positive integer :");
    scanf("%d", &num);//輸入

    short shor_ans = 1;
    int int_ans = 1;
    long l_ans = 1;
    long long ll_ans = 1;
    float f_ans = 1;
    double df_ans = 1;
    long double ldf_ans = 1;
    for (int i = 2; i <= num;i++){
        shor_ans *= i;
        int_ans *= i;
        l_ans *= i;
        ll_ans *= i;
        f_ans *= i;
        df_ans *= i;
        ldf_ans *= i;
    }//處理輸入

    printf("Factorial of %d (short)             :%hd\n",num, shor_ans);
    printf("Factorial of %d (int)               :%d\n",num, int_ans);
    printf("Factorial of %d (long)              :%ld\n", num,l_ans);
    printf("Factorial of %d (long long)         :%lld\n",num, ll_ans);
    printf("Factorial of %d (float)             :%f\n",num, f_ans);
    printf("Factorial of %d (double)            :%f\n", num,df_ans);
    printf("Factorial of %d (long double)       :%Lf\n", num,ldf_ans);//輸出

    return 0;

}
