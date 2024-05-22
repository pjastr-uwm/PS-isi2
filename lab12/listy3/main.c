#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void printListWithoutHead(struct element * list){
    if (list == NULL){
        printf("Empty list");
    }
    struct element * pointer = list;
    while(pointer != NULL){
        printf("%d\n", pointer->x);
        pointer = pointer->next;
    }
}

void printListWithoutHead2(struct element * list){
    if (list == NULL){
        printf("Empty list");
    }
    while(list != NULL){
        printf("%d\n", list->x);
        list = list->next;
    }
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x  = -12;
    list->next->next->next = NULL;
    printListWithoutHead2(list);
    printListWithoutHead(list);
    struct element * empty = NULL;
    printListWithoutHead(empty);
    return 0;
}
