/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.7 (put program development started date here   */
/* Purpose: poker                                                */
/* Change History: 2019.11.17初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int straight = 0, flush = 0, four = 0, three = 0, pair = 0;

int cardExist[13][4];
int rankFirst; //declare variable

void read_cards(int rankNum[], int suitNum[]) {
    int cardReaded = 0;
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 0) {
                suitNum[j] = 0;
            }
            cardExist[i][j] = 0;
        }
        rankNum[i] = 0;
    } //init variable

    while (cardReaded < 5) {
        char c;
        int badCard = 0, rank, suit;
        printf("Enter a card! : ");
        c = getchar();
        if (c == 48) {
            exit(0);
        } else if (c > 49 && c < 58) {
            rank = c - '2';
        } else {
            switch (c) {
                case 't':
                case 'T':
                    rank = 8;
                    break;
                case 'j':
                case 'J':
                    rank = 9;
                    break;
                case 'q':
                case 'Q':
                    rank = 10;
                    break;
                case 'k':
                case 'K':
                    rank = 11;
                    break;
                case 'a':
                case 'A':
                    rank = 12;
                    break;
                default:
                    badCard = 1;
            }
        }
        c = getchar();
        switch (c) {
            case 'c':
            case 'C':
                suit = 0;
                break;
            case 'd':
            case 'D':
                suit = 1;
                break;
            case 'h':
            case 'H':
                suit = 2;
                break;
            case 's':
            case 'S':
                suit = 3;
                break;
            default:
                badCard = 1;
        }
        while ((c = getchar()) != '\n') {
            if (c != ' ') {
                badCard = 1;
            }
        }
        if (badCard) {
            printf("Bad card; ignored. \n");
        } else if (cardExist[rank][suit] != 0) {
            printf("Duplicate card; ignored. \n");
        } else {
            suitNum[suit]++;
            rankNum[rank]++;
            cardExist[rank][suit]++;
            cardReaded++;
        } //input
    }
}
void analyze_hand(int rankNum[], int suitNum[]) {
    int consecNum = 0;
    straight = 0, flush = 0, four = 0, three = 0, pair = 0;
    for (int i = 0; i < 4; i++) {
        if (suitNum[i] == 5) {
            flush = 1;
        }
    } // check flush

    rankFirst = 0;
    while (rankNum[rankFirst] == 0) {
        rankFirst++;
    }
    for (; rankFirst < 13 && rankNum[rankFirst] > 0; rankFirst++) {
        consecNum++;
    }
    if (consecNum == 5) {
        straight = 1;
    } //check straight

    for (int i = 0; i < 13; i++) {
        if (rankNum[i] == 4) {
            four = 1;
            break;
        }
        if (rankNum[i] == 3) {
            three = 1;
            continue;
        }
        if (rankNum[i] == 2) {
            pair++;
        }
    } //check pair three of king.....
}
void print_result(void) {
    if (straight == 1 && flush == 1) {
        printf("Straight flush");
    } else if (four == 1) {
        printf("Four of a king");
    } else if (three == 1 && pair == 1) {
        printf("Full house");
    } else if (flush == 1) {
        printf("Flush");
    } else if (straight == 1) {
        printf("Straight");
    } else if (three == 1) {
        printf("Three of a king");
    } else if (pair == 2) {
        printf("Two pair");
    } else if (pair == 1) {
        printf("Pair");
    } else {
        printf("High card");
    }
    printf("\n\n"); //output
}
int main(void) {
    int num_in_rank[13], num_in_suit[4]; //declare variable
    while (1) {
        read_cards(num_in_rank, num_in_suit);
        analyze_hand(num_in_rank, num_in_suit);
        print_result();
    }
    return 0;
}
