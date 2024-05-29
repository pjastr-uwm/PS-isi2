#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element * list){
    struct element * current = list;
    while(current != NULL){
        if (current->x > 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 2;
    list->next = malloc(sizeof(struct element));
    list->next->x = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 8;
    list->next->next->next = NULL;
    printPos(list);
    return 0;
}
