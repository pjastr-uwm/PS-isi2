#include <stdio.h>
#include <stdlib.h>

float average(int n, int tab[]){
    float temp =0;
    for(int i=0;i<n;i++){
        temp += tab[i];
    }
    return temp/n;
}

int main()
{
    int tab[] = {3,4,6};
    printf("%f\n", average(3, tab));
    return 0;
}
