#include <stdio.h>
#include <stdlib.h>

void rmLower(char txt[]){
    int i=0,j=0;
    while(txt[i]!=0){
        if (txt[i] < 'a' || txt[i] > 'z'){
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j]=0;
}

int main()
{
    char t1[] = "ABcd34";
    rmLower(t1);
    printf("%s\n", t1);
    return 0;
}
