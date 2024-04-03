#include <stdio.h>
#include <stdlib.h>

float average(int n, int* tab){
    float temp =0;
    for(int i=0;i<n;i++){
        temp += *(tab+i);
    }
    return temp/n;
}

int main()
{
    int * tab = malloc(3*sizeof(int));
    *tab = 3;
    *(tab+1) = 4;
    *(tab+2) = 6;
    printf("%f\n", average(3, tab));
    free(tab);
    return 0;
}
