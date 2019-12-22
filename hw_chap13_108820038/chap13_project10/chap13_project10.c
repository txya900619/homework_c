/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose: 簡寫姓名                                             */
/* Change History: 2019.10.19初打                                */
/*****************************************************************/
#include <stdio.h>
#include <string.h>
void reverseName(char *name) {
    char fi[5];
    char *p = name; //declare variable
    while (*p == ' ') {
        p++;
    } //find first
    sprintf(fi, ", %c.", *p);
    while (*p != ' ') {
        p++;
    }
    while (*p == ' ') {
        p++;
    }
    while (*p != ' ' && *p != '\0') {
        *name++ = *p++;
    }
    strcpy(name, fi);
}
int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
} //a write in function
int main(void) {
    char name[60]; //宣告變數

    printf("Enter a first and last name: ");
    read_line(name, 60); //input

    reverseName(name); //runfunction

    printf("%s\n", name); //output
    return 0;
}
