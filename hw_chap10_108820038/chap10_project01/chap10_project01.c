/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.07 (put program development started date here   */
/* Purpose: stack                                                */
/* Change History: 2019.11.16 初打                               */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100 //max stack

char stack[MAX_STACK];
int top = -1; //declare stack

void push(char c) {
    if (top == MAX_STACK) {
        printf("Stack overflow\n");
        exit(0);
    }
    stack[++top] = c;
} //push function
char pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(0);
    }
    return stack[top--];
} //pop function
int main(void) {

    int isPare = 1;
    char c; //declare variable

    printf("Enter parentheses and/or braces :");
    while (isPare && (c = getchar()) != '\n') {
        if (c == '{' || c == '(') {
            push(c);
        } else if (c == '}') {
            isPare = ('{' == pop());
        } else if (c == ')') {
            isPare = ('(' == pop());
        } else {
            printf("please input {,(,},)\n");
            exit(0);
        }

    } //input and test

    if (isPare && top == -1) {
        printf("Parentheses/braces are nested properly\n");
    } else {
        printf("Parentheses/braces NOT are nested properly\n");
    } //output

    return 0;
}
