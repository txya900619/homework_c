/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) { //input
    int i, sum = 0;                //declare variable
    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]); //count
    }
    printf("Total : %d\n", sum); //output
    return 0;
}
