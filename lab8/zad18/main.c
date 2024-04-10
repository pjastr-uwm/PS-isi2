#include <stdio.h>
#include <stdlib.h>

int length(char*txt){
    int counter =0;
    for(int i=0;txt[i] !=0;i++){
        counter++;
    }
    return counter;
}

char* copyEveryThird(char* txt){
    char * temp = malloc((length(txt)+1)*sizeof(char));
    int i=0,j=0;
    while(txt[i] !=0){
        if (i%3 ==0){
            temp[j] = txt[i];
            j++;
        }
        i++;
    }
    temp[j] = 0;
    return temp;

}
int main()
{
    char t[] = "ABCXYZ";
    char* result=copyEveryThird(t);
    printf("%s\n", result);
    printf("%s\n", copyEveryThird("Informatyka"));
    return 0;
}
