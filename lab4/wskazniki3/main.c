#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w){
    *w = x;
}

int main()
{
    int a =4, b=7;
    copyInt(a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
