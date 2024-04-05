#include <stdio.h>
#include <stdlib.h>

int lexComp(char t1[], char t2[]){
    int i;
    for(i=0;t1[i] !=0 && t2[i] !=0; i++){
        if (t1[i] < t2[i])
            return 1;
        if (t1[i] > t2[i])
            return 0;
    }
    if (t1[i] ==0 && t2[i] ==0)
        return 0;
    if (t1[i] ==0)
        return 1;
    return 0;
}

int main()
{
    printf("%d\n", lexComp("ABC", "XYZ")); //1
    printf("%d\n", lexComp("XYZ", "ABC")); //0
    printf("%d\n", lexComp("DOM", "DOK")); //0
    printf("%d\n", lexComp("DOK", "DOM")); //1
    printf("%d\n", lexComp("RBC", "ABC")); //0
    printf("%d\n", lexComp("ABC", "RBC")); //1
    printf("%d\n", lexComp("ABC", "AB")); //0
    printf("%d\n", lexComp("AB", "ABC")); //1
    printf("%d\n", lexComp("Ak2", "bW3")); //1
    printf("%d\n", lexComp("bW3", "Ak2")); //0
    printf("%d\n", lexComp("ABC", "ABC")); //0
    printf("%d\n", lexComp("", "ABC")); // 1
    printf("%d\n", lexComp("ABC", "")); // 0
    printf("%d\n", lexComp("ABCD", "Aw")); // 1
    printf("%d\n", lexComp("Aw", "ABCD")); //0
    return 0;
}
