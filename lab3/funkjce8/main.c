#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls(){
    static int countFunctionCalls =0;
    countFunctionCalls++;
    printf("%d\n", countFunctionCalls);
}

int main()
{
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}
