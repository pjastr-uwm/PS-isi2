#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * t1 = "Olsz\000tyn";
    char t2[] = "Olsztyn";
    printf("%s %s\n", t1, t2);
    //t1[2] = 'K';
    t2[2] = 'K';
    printf("%s %s\n", t1, t2);
    return 0;
}
