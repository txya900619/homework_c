/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.25 (put program development started date here   */
/* Purpose: 算成績                                                */
/* Change History: 2019.09.25初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void){
    int num_grade;
    char grade;

    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);

    switch(num_grade/10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
    }

    if(num_grade>100||num_grade<0){
        printf("Error");
    }else{
        printf("Letter grade: %c", grade);
    }

    return 0;
}
