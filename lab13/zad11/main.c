#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addLast(struct element * list, int a){
    if (list == NULL){
        struct element * temp = malloc(sizeof(struct element));
        temp->x = a;
        temp->next = NULL;
        return temp;
    }
    struct element * current = list;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(struct element));
    current->next->x = a;
    current->next->next = NULL;
    return list;
}

void printList(struct element * list){
    if(list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * current = list;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = NULL;
    printList(list);
    list = addLast(list, 5);
    printList(list);
    list = addLast(list, -9);
    list = addLast(list, 33);
    printList(list);
    return 0;
}
