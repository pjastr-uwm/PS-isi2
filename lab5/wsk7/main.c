#include <stdio.h>
#include <stdlib.h>

float* initFlts(){
    float* wsk = malloc(4*sizeof(float));
    for(int i=0;i<4;i++){
        *(wsk+i) = 0.5 +i;
    }
    return wsk+3;
}

int main()
{
    float*wynik = initFlts();
    printf("%f\n", *wynik);
    printf("%f\n", *(wynik-1));
    printf("%f\n", *(wynik-2));
    printf("%f\n", *(wynik-3));
    return 0;
}
