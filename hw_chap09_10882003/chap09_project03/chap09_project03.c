/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.10.19 (put program development started date here   */
/* Purpose: 簡寫姓名                                             */
/* Change History: 2019.10.19初打                                */
/*****************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[10][10]){
    int x=0,y=0,tx,ty;
    int isFinish=1;
    for(int i =0;i<10;i++){
        for(int j =0;j<10;j++){
            walk[i][j]='.';
        }
    }
    srand((unsigned) time(NULL));
    walk[0][0]='A';
    for(char a='B';a<='Z';a++){
        int dir;
        tx=x;
        ty=y;
        
        dir = rand()%4;

        switch (dir)
        {
            case 0:
                ty-=1;
                break;
            case 1:
                ty+=1;
                break;
            case 2:
                tx-=1;
                break;
            case 3:
                tx+=1;
                break;
           }
        if(tx<0||ty<0||tx>9||ty>9||walk[ty][tx]!='.'){
            if((y-1<0||walk[y-1][x]!='.')&&(y+1>9||walk[y+1][x]!='.')&&(x-1<0||walk[y][x-1]!='.')&&(x+1>9||walk[y][x+1]!='.')){

                break;
            }
            a-=1;
            continue;
        }
        else{
            x=tx;
            y=ty;
            walk[ty][tx]=a;
        }
    }
}
void print_array(char walk[10][10]){
    for(int i = 0 ;i<9;i++){
        for(int j = 0;j<9;j++){
            printf("%c ",walk[i][j]);
        }
        printf("\n");
    }
}
int main(void){
    char arr[10][10];
    generate_random_walk(arr);
    print_array(arr);

    
    return 0;
}
