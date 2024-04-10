#include <stdio.h>
#include <stdlib.h>

int isDigit(char znak){
    if ('0' <=znak && znak <='9')
        return 1;
    return 0;
}

void rmDigits(char txt[]){
    int i=0,j=0;
    while(txt[i]!=0){
        if( !isDigit(txt[i])){
            txt[j]=txt[i];
            j++;
        }
        i++;
    }
    txt[j] =0;
}

int main()
{
    char t[] = "ABC74W";
    rmDigits(t);
    printf("%s\n", t);
    return 0;
}
