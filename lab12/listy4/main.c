#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list");
    }
    struct element * pointer = list->next;
    while(pointer != NULL){
        printf("%d\n", pointer->x);
        pointer = pointer->next;
    }
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x  = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printListWithHead(list);
    return 0;
}
