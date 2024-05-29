#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element * list){
    struct element * current = list->next;
    while(current != NULL){
        if (current->x %2 != 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 12;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 7;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -5;
    list->next->next->next->next = NULL;
    printOdd(list);
    return 0;
}
