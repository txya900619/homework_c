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
#include <string.h>

#define MAX_WORDS 50
#define WORD_LEN 20

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int compare_strings(const void *p, const void *q) {
    return strcmp(*(char **)p, *(char **)q);
}
//declare function
int main() {
    char *words[MAX_WORDS], word[WORD_LEN + 1];
    int i, num_words = 0;
    //declacre variable
    for (;;) {
        if (num_words >= MAX_WORDS) {
            printf(" -- No space left --\n");
            break;
        }
        printf("Enter word: ");
        read_line(word, WORD_LEN);
        if (strlen(word) == 0) {
            break;
        }
        words[num_words] = (char *)malloc(strlen(word) + 1);
        if (words[num_words] == NULL) {
            printf(" -- No space left --\n");
            break;
        }
        strcpy(words[num_words], word);
        num_words++;
    }
    qsort(words, num_words, sizeof(char *), compare_strings);
    //input and quicksort
    printf("\nIn sorted order:");
    for (i = 0; i < num_words; i++) {
        printf(" %s", words[i]);
    }
    printf("\n");
    //output
    return 0;
}