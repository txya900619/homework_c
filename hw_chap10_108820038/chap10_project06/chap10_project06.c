/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.07 (put program development started date here   */
/* Purpose: stack                                                */
/* Change History: 2019.11.17 初打                               */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 100 //max stack

int stack[MAX_STACK];
int top = -1; //declare stack

void push(int i) {
    if (top == MAX_STACK) {
        printf("Stack overflow\n");
        exit(0);
    }
    stack[++top] = i;
} //push function
char pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(0);
    }
    return stack[top--];
} //pop function
int main(void) {

    char c;
    int num, pop1, pop2; //declare variable

    printf("Enter an RPN expression : ");
    while (1) {
        scanf(" %c", &c);
        num = c - '0';
        if (num > -1 && num < 10) {
            push(num);
        } else {
            switch (c) {
                case '+':
                    push(pop() + pop());
                    break;
                case '-':
                    pop1 = pop();
                    pop2 = pop();
                    push(pop2 - pop1);
                    break;
                case '*':
                    push(pop() * pop());
                    break;
                case '/':
                    pop1 = pop();
                    pop2 = pop();
                    push(pop2 / pop1);
                    break;
                case '=':
                    printf("Value of expression : %d\n", pop());
                    top = 0;
                    printf("Enter an RPN expression : ");
                    break;
                default:
                    exit(0);
            }
        }
    } //input and calculate and output

    return 0;
}
