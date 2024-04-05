#include <stdio.h>
#include <stdlib.h>

int countNums(char txt[]){
    int counter=0;
    for(int i=0; txt[i]!=0;i++){
        if (txt[i] >= '0' && txt[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countNums("abc234"));
    return 0;
}
