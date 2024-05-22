#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
};

struct Person * initPerson(char name2[20], int age2){
    struct Person * wsk = malloc(sizeof(struct Person));
    strcpy(wsk->name, name2);
    wsk->age = age2;
    return wsk;
}

void showPerson(struct Person arg){
    printf("%s %d\n", arg.name, arg. age);
}

void birthday(struct Person * wsk){
    wsk->age ++;
}

int main()
{
    struct Person * o1 = initPerson("Sylwia", 22);
    showPerson(*o1);
    birthday(o1);
    showPerson(*o1);
    return 0;
}
