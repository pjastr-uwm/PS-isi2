#include <stdio.h>
#include <stdlib.h>

int length(char * txt){
    int counter =0;
    for(int i=0;txt[i] != '\0';i++){
        counter++;
    }
    return counter;
}

int main()
{
    printf("%d\n", length("Olsztyn"));
    printf("%d\n", length("Ols\nztyn"));
    printf("%d\n", length("Ols\000ztyn"));
    char t1[] = "abcjwdghjhe";
    char * t2 = "ejhew7362";
    printf("%d\n", length(t1));
    printf("%d\n", length(t2));
    return 0;
}
