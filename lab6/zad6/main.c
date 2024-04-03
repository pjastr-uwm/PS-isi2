#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int * tab){
    for(int i=0;i<n/2;i++){
        int temp = *(tab+i);
        *(tab+i) = *(tab+n-1-i);
        *(tab+n-1-i) = temp;
    }
}

void printTable(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int * tab = malloc(sizeof(int)*5);
    *tab = 3;
    *(tab+1) = -4;
    *(tab+2) = 5;
    *(tab+3) = -8;
    *(tab+4) = 11;
    printTable(5, tab);
    reverseArr(5, tab);
    printTable(5, tab);
    return 0;
}
