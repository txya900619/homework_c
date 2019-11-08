/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.29 (put program development started date here   */
/* Purpose: reverse sentence                                     */
/* Change History: 2019.10.29初打                                */
/*****************************************************************/
#include <stdio.h>
int power(int x,int n){
    int ans=0;
    if(n==0){
      return 1;   
    }
     ans = power(x, n / 2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans* x;
    }
}//circulate

int main(void){
    int x,n;//declare variable

    printf("For x^n, enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);//input x and n

    printf("%d^%d = %d\n",x,n,power(x,n));//call function and output 
    
    return 0;
}
