#include <stdio.h>
#include <stdlib.h>

double subPtrs(double const * num1, double * const num2){
    return *num1 - *num2;
}

int main()
{
    double a =9.2, b =-4.3;
    printf("%lf\n", subPtrs(&a, &b));
    return 0;
}
