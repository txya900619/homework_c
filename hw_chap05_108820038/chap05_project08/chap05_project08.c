/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.09.25 (put program development started date here   */
/* Purpose: 找時間最近的                                          */
/* Change History: 2019.09.25初打                                */
/*****************************************************************/
#include <stdio.h>
int main(void) {
    int dep_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arri_time[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hour, min, total, count, ans;
    count = 0; //定義變數

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min); //輸入時間

    total = hour * 60 + min; //換算時間

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

    printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s", dep_time[ans] / 60 > 12 ? dep_time[ans] / 60 % 12 : dep_time[ans] / 60, dep_time[ans] % 60, dep_time[ans] < 720 ? "a.m." : "p.m.", arri_time[ans] / 60 > 12 ? arri_time[ans] / 60 % 12 : arri_time[ans] / 60, arri_time[ans] % 60, arri_time[ans] < 720 ? "a.m." : "p.m."); //輸出

    return 0;
}
