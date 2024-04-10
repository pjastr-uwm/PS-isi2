#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    int i=0;
    while(txt[i] != 0){
        if ('a' <= txt[i] && txt[i] <= 'z'){
            txt[i] -= 32;
        }
        i++;
    }
}

int main()
{
    char t[] = "Olsztyn";
    toUpperNew(t);
    printf("%s\n", t);
    return 0;
}
