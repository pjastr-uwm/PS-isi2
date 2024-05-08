#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int tab1[3][4] = {{3,0,9,2}};
    int tab2[3][4] = {{1,2,8,-9}, {3,-6,1,9},{-9,3,-5,-2}};
    printTable(3,4,tab1);
    printTable(3,4,tab2);
    swapElems(3,4,tab1, tab2);
    printTable(3,4,tab1);
    printTable(3,4,tab2);
    return 0;
}
