/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.22 (put program development started date here   */
/* Purpose: poker                                                */
/* Change History: 2019.11.22初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void find_closest_flight(int total, int *ANSdep_time, int *ANSarri_time) {
    int dep_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arri_time[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int ans; //宣告變數
    for (int i = 1; i <= 6; i++) {
        if (total > (dep_time[i - 1] + dep_time[i]) / 2 && total < (dep_time[i] + dep_time[i + 1]) / 2) {
            ans = i;
        }
        if (total == dep_time[i]) {
            ans = i;
        }
    }
    if (total >= 1305 || total <= 480) {
        if (total <= 1440) {
            ans = 7;
        } else if (total < 172.5) {
            ans = 7;
        } else {
            ans = 0;
        }
    } //尋找最相近的時間
    *ANSdep_time = dep_time[ans];
    *ANSarri_time = arri_time[ans];
}
int main(void) {

    int dep_time;
    int arri_time;
    int hour, min, total; //宣告變數

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min); //輸入時間

    total = hour * 60 + min; //換算時間
    find_closest_flight(total, &dep_time, &arri_time);

    printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s", dep_time / 60 > 12 ? dep_time / 60 % 12 : dep_time / 60, dep_time % 60, dep_time < 720 ? "a.m." : "p.m.", arri_time / 60 > 12 ? arri_time / 60 % 12 : arri_time / 60, arri_time % 60, arri_time < 720 ? "a.m." : "p.m."); //輸出

    return 0;
}