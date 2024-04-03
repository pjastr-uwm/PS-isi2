#include <stdio.h>
#include <stdlib.h>

int minValue(int n, int tab[]){
    int min = tab[0];
    for(int i=1;i<n;i++){
        if (min > tab[i]){
            min = tab[i];
        }
    }
    return min;
}

int main()
{
    int tab[] = {-3, 4,-12,12};
    printf("%d\n", minValue(4, tab));
    return 0;
}
