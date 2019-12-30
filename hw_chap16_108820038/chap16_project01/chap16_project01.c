/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>

#define ARRAY_LEN(x) ((int)(sizeof(x)) / sizeof(x[0])) //define function

const struct {
    char str[100];
    int ccode;
} country_codes[] =
    {{"Argentina", 54}, {"Bangladesh", 889}, {"Brazil", 55}, {"Burma (Myanmar)", 95}, {"China", 86}, {"Columbia", 57}, {"Congo, Dem. Rep. of", 243}, {"Egypt", 20}, {"Ethiopia", 251}, {"France", 33}, {"Germany", 49}, {"India", 91}, {"Indonesia", 62}, {"Iran", 98}, {"Italy", 39}, {"Japan", 81}, {"Mexico", 52}, {"Nigeria", 234}, {"Pakistan", 92}, {"Philippines", 63}, {"Poland", 48}, {"Russia", 7}, {"South Africa", 27}, {"South Korea", 82}, {"Spain", 34}, {"Sudan", 249}, {"Thailand", 66}, {"Turkey", 90}, {"Ukraine", 380}, {"United Kingdom", 44}, {"United States", 1}, {"Vietnam", 84}};
//set const data
int main(int argc, char *argv[]) {
    int code, i; //declare variable

    printf("Enter an international dialing code: ");
    scanf("%d", &code); //input

    for (i = 0; i < ARRAY_LEN(country_codes); i++) {
        if (code == country_codes[i].ccode) {
            printf("%d is the code for %s.\n", country_codes[i].ccode, country_codes[i].str);
            return 0;
        }
    } //output

    printf("Error: %d is not a valid country code.\n", code);
    //handel err
    return 0;
}
