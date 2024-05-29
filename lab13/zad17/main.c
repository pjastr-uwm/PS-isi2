#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * lastEvenPointer(struct element * list){
    struct element * current = list;
    struct element * temp = NULL;
    while(current != NULL){
        if (current->x %2 ==0){
            temp = current;
            // temp = &current->x;
        }
        current = current->next;
    }
    return temp;
}

void printList(struct element * list){
    if(list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * current = list;
    while(current != NULL){
        printf("%d %p\n", current->x, &current->x);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = -3;
    list->next = malloc(sizeof(struct element));
    list->next->x = 8;
    list->next->next = NULL;
    printList(list);
    printf("%p\n", lastEvenPointer(list));
    return 0;
}
