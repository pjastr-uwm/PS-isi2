#include <stdio.h>
#include <stdlib.h>

int * shiftLeft(int n, int tab[]){
    int * temp = malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        temp[i] = tab[i+1];
    }
    temp[n-1] = tab[0];
    return temp;
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {5,-4,9,11,8};
    printTable(5, tab);
    int * results = shiftLeft(5, tab);
    printTable(5, tab);
    printTable(5, results);
    return 0;
}
