#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if ((rok %4 ==0 && rok%100 !=0) || rok %400==0){
        printf("rok przestepny");
    }
    else{
        printf("rok nieprzestepny");
    }
    return 0;
}
