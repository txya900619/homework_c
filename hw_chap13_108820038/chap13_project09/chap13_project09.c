/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose:算母音數量                                             */
/* Change History: 2019.10.18初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compute_vowel_count(const char *sentence) {
    int count = 0; //宣告變數
    for (int i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == '\0') {
            break;
        }
        if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
            count++;
        } //count vowels
    }
    return count;
}
int main(void) {
    char input[100000]; //宣告變數

    printf("Enter a sentense: ");
    gets(input); //input

    strupr(input); //lower to upper

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(input)); //output
    return 0;
}
