#include "./readline/readline.h"
#include <stdio.h>

#define NAMELEN 25
#define MAXPARTS 100

struct part {
    int number;
    char name[NAMELEN + 1];
    float price;
    int on_hand;
} inventory[MAXPARTS];

int num_parts = 0;
//declare variable and struct
int find_part(int num) {
    int i;
    for (i = 0; i < num_parts; i++) {
        if (inventory[i].number == num) {
            return i;
        }
    }
    return -1;
}

void insert(void) {
    int part_num;
    if (num_parts == MAXPARTS) {
        printf("Database is full; can't add more parts.\n");
        return;
    }
    printf("Enter part number : ");
    scanf("%d", &part_num);
    if (find_part(part_num) >= 0) {
        printf("Part already exists.\n");
        return;
    }

    inventory[num_parts].number = part_num;
    printf("Enter part name : ");
    read_line(inventory[num_parts].name, NAMELEN);
    printf("Enter price : ");
    scanf("%f", &inventory[num_parts].price);
    printf("Enter quantity on hand : ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search(void) {
    int i, num;
    printf("Enter part number : ");
    scanf("%d", &num);
    i = find_part(num);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Price: $%.2f\n", inventory[i].price);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else {
        printf("Part not found.\n");
    }
}

void change(void) {
    int i, num;
    float newPrice;

    printf("Enter part number : ");
    scanf("%d", &num);
    i = find_part(num);
    if (i >= 0) {
        printf("Enter new price : ");
        scanf("%f", &newPrice);
        inventory[i].price = newPrice;
    } else {
        printf("Part not found.\n");
    }
}

void update(void) {
    int i, num, change;

    printf("Enter part number: ");
    scanf("%d", &num);
    i = find_part(num);

    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand = change;
    } else
        printf("Part not found.\n");
}

void print(void) {
    int i;

    printf("Part number \t Part name \t\t "
           "Price \t\t Quantity on Hand\n");
    for (i = 0; i < num_parts; i++)
        printf("%7d          %-25s $%2.2f     %9d\n",
               inventory[i].number, inventory[i].name, inventory[i].price, inventory[i].on_hand);
}
//declare function
int main(void) {
    char code; //declare variable
    for (;;) {

        printf("Enter operation code : ");
        scanf(" %c", &code); //input

        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'c':
                change();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                return 0;
            default:
                printf("Illegal code\n");
        } //go to function
        printf("\n");
    }

    return 0;
}