/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>

#define SIZE ((int)sizeof(flights) / sizeof(flights[0]))

struct flight {
    int depart, arri;
} flights[] = {
    {480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

void put_time(int time) {
    int hr = time / 60;
    if (hr == 0) {
        hr = 12;
    } else if (hr > 12) {
        hr -= 12;
    }
    printf("%d:%.2d ", hr, time % 60);
    if (time < 12 * 60) {
        printf("a.m.");
    } else {
        printf("p.m.");
    }
}
//output function
int main(void) {
    int hr, min, time, closest;
    //declare variable
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    time = hr * 60 + min;
    //input
    if (time <= flights[0].depart) {
        closest = 0;
    } else if (time > flights[SIZE - 1].depart) {
        closest = SIZE - 1;
    } else {
        closest = 0;
        while (time > flights[closest + 1].depart) {
            closest++;
        }
        if ((flights[closest + 1].depart - time) < (time - flights[closest].depart)) {
            closest++;
        }
    }
    //result

    printf("Closest departure time is ");
    put_time(flights[closest].depart);
    printf(", arriving at ");
    put_time(flights[closest].arri);
    printf("\n"); //output

    return 0;
}
