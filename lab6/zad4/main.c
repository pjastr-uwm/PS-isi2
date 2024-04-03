#include <stdio.h>
#include <stdlib.h>

void copyArr(int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        tab2[i] = tab1[i];
    }
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[] = {3,-4,5,11,2};
    int tab2[5];
    copyArr(5, tab1, tab2);
    printTable(5, tab1);
    printTable(5, tab2);
    return 0;
}
