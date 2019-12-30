#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define NAMELEN 25

struct part {
    int number;
    char name[NAMELEN + 1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;
//declare  struct
struct part *find_part(int num) {
    struct part *p;
    for (p = inventory; p != NULL && num > p->number; p = p->next)
        ;
    if (p != NULL && num == p->number) {
        return p;
    }
    return NULL;
}

int read_line(char str[], int n) {

    int ch, i = 0;
    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF) {
        if (i < n) {
            str[i++] = ch;
            ch = getchar();
        }
    }
    str[i] = '\0';
    return i;
}
void insert(void) {
    struct part *cur, *prev, *new_node;
    new_node = malloc(sizeof(struct part));
    if (new_node == NULL) {
        printf("Database is full; can't add more parts.\n");
        return;
    }
    printf("Enter part number : ");
    scanf("%d", &new_node->number);
    for (cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number) {
        printf("Part already exists.\n");
        free(new_node);
        return;
    }

    printf("Enter part name : ");
    read_line(new_node->name, NAMELEN);
    printf("Enter quantity on hand : ");
    scanf("%d", &new_node->on_hand);
    new_node->next = cur;
    if (prev == NULL) {
        inventory = new_node;
    } else {
        prev->next = new_node;
    }
}

void erase(void) {
    struct part *cur, *prev;
    int n;
    printf("Enter part number: ");
    scanf("%d", &n);
    for (cur = inventory, prev = NULL; cur != NULL && cur->number != n; prev = cur, cur = cur->next)
        ;
    if (cur != NULL) {
        if (cur->number == inventory->number) {
            inventory = inventory->next;
        } else {
            prev->next = cur->next;
        }
        free(cur);
    } else {
        printf("Part number %d not found in database\n", n);
    }
}

void search(void) {
    int num;
    struct part *p;
    printf("Enter part number : ");
    scanf("%d", &num);
    p = find_part(num);
    if (p != NULL) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    } else {
        printf("Part not found.\n");
    }
}

void update(void) {
    int num, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &num);
    p = find_part(num);

    if (p != NULL) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand = change;
    } else
        printf("Part not found.\n");
}

void print(void) {
    struct part *p;

    printf("Part number   Part name \t\t "
           " Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d       %-25s%11d\n",
               p->number, p->name, p->on_hand);
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
            case 'e':
                erase();
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