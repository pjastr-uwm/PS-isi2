#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

void strCopyNew(wchar_t src[], wchar_t dest[]){
    int i;
    for(i=0;src[i] !=0;i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    setlocale(LC_ALL,"");
    wchar_t t1[] = L"ąę";
    wchar_t t2[] = L"informatyka";
    wprintf(L"%s\n", t1);
    wprintf(L"%s\n", t2);
    strCopyNew(t1,t2);
    wprintf(L"%s\n", t1);
    wprintf(L"%s\n", t2);
    return 0;
}
