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
    float e=1,devi=1;
    for (int i=2; i < 11;i++){
        e += 1 / devi;
        devi *= i;
    }
    printf("Approximation of e: %f", e);
    return 0;
}
