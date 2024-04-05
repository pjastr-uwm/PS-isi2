#include <stdio.h>
#include <stdlib.h>

int length(char * txt){
    int counter =0;
    for(int i=0;txt[i] != '\0';i++){
        counter++;
    }
    return counter;
}

int length2(char * txt){
    int counter =0;
    for(int i=0;txt[i] != 0;i++){
        counter++;
    }
    return counter;
}

int length3(char * txt){
    int counter =0;
    int i=0;
    while(txt[i] != 0){
        counter++;
        i++;
    }
    return counter;
}

int length4(char * txt){
    int counter =0;
    int i=0;
    while(*(txt+i) != 0){
        counter++;
        i++;
    }
    return counter;
}

int length5(char * txt){
    int counter =0;
    int i=0;
    while(*(txt+i)){
        counter++;
        i++;
    }
    return counter;
}

int length6(char*napis){
    if (napis[0] == 0)
        return 0;
    return 1+length6(++napis);
}

int length7(char*napis){
    if (*napis == 0)
        return 0;
    return 1+length7(++napis);
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
    printf("%d\n", length2("Olsztyn"));
    printf("%d\n", length3("Olsztyn"));
    printf("%d\n", length4("Olsztyn"));
    printf("%d\n", length5("Olsztyn"));
    printf("%d\n", length6("Olsztyn"));
    printf("%d\n", length7("Olsztyn"));
    return 0;
}
