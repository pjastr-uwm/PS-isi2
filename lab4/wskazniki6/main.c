#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float* wsk = malloc(3*sizeof(int));
    *wsk = 4.5;
    *(wsk+1) = 2.3;
    *(wsk+2) = -4.2;
    return wsk;
}

int main()
{
    float * wynik = initFloats();
    for(int i=0;i<3;i++){
        printf("%f\n", *(wynik+i));
    }
    return 0;
}
