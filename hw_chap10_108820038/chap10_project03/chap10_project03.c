/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳力瑋 (put your name here)                           */
/* ID: 108820038 (your student ID here)                          */
/* Date: 2019.11.7 (put program development started date here   */
/* Purpose: poker   2                                            */
/* Change History: 2019.11.17初打                                */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
int straight = 0, flush = 0, four = 0, three = 0, pair = 0;
int cardinhand[5][2]; //declare variable
int duplicateCard(int rank, int suit, int cardinhand[5][2], int cardReaded) {
    for (int i = 0; i < cardReaded; i++) {
        if (cardinhand[i][0] == rank && cardinhand[i][1] == suit) {
            return 1;
        }
    }
    return 0;
}
void read_card(void) {
    char c;
    int badCard, rank, suit, cardReaded = 0;
    straight = 0, flush = 0, four = 0, three = 0, pair = 0; //declare variable
    while (cardReaded < 5) {
        badCard = 0;
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
        } else if (duplicateCard(rank, suit, cardinhand, cardReaded) == 1) {
            printf("Duplicate card; ignored. \n");
        } else {
            cardinhand[cardReaded][0] = rank;
            cardinhand[cardReaded][1] = suit;
            cardReaded++;
        } //input
    }
}
void analyze_hand(void) {
    int matches;
    for (int i = 0; i < 5; i++) {
        int tempSuit, tempRank, smallest = i;
        for (int j = i + 1; j < 5; j++) {
            if (cardinhand[j][0] < cardinhand[smallest][0]) {
                smallest = j;
            }
        }
        if (i != smallest) {
            tempRank = cardinhand[i][0];
            tempSuit = cardinhand[i][1];
            cardinhand[i][0] = cardinhand[smallest][0];
            cardinhand[i][1] = cardinhand[smallest][1];
            cardinhand[smallest][0] = tempRank;
            cardinhand[smallest][1] = tempSuit;
        }
    }
    for (int i = 1; i < 5; i++) {
        if (cardinhand[i][1] != cardinhand[0][1]) {
            break;
        }
        if (i == 4) {
            flush = 1;
        }
    } // check flush

    for (int i = 1; i < 5; i++) {
        if (cardinhand[i][0] - cardinhand[i - 1][0] != 1) {
            break;
        }
        if (i == 4) {
            straight = 1;
        }
    } //check straight

    for (int i = 0; i < 5; i++) {
        matches = 0;
        for (int j = i + 1; j < 5; j++) {
            if (cardinhand[j][0] == cardinhand[i][0]) {
                matches++;
            }
        }
        if (matches == 1) {
            pair++;
        }
        if (matches == 2) {
            pair--;
            three++;
        }
        if (matches == 3) {
            four++;
            break;
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
    while (1) {
        read_card();
        analyze_hand();
        print_result();
    }
    return 0;
}
