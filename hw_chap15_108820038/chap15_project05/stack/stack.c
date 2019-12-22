#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 100 //max stack

int stack[MAX_STACK];
int top = -1; //declare stack

void push(int i) {
    if (top == MAX_STACK) {
        printf("Expression is too complex\n");
        exit(0);
    }
    stack[++top] = i;
} //push function
char pop(void) {
    if (top < 0) {
        printf("Not enough operands in expression\n");
        exit(0);
    }
    return stack[top--];
} //pop function
void makeempty(void) {
    top = 0;
}