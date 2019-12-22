/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include "./quicksort/quicksort.h"
#include <stdio.h>
int main(int argc, char *argv[]) { //input
    int a[10], i;
    printf("Enter %d numbers to be sorted : ", 10);
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, 9);
    printf("In sorted order : ");
    for (i = 0; i < 10; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
