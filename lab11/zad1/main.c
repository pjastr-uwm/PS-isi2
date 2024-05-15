#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char * brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car auto1;
    auto1.brand="Skoda";
    strcpy(auto1.model, "Fabia");
    auto1.year = 2020;
    auto1.isAvailable = 1;
    printf("%s %s %d %d\n", auto1.brand, auto1.model, auto1.year, auto1.isAvailable);
    struct Car auto2 = {"Fiat", "126",1975, 0};
    printf("%s %s %d %d\n", auto2.brand, auto2.model, auto2.year, auto2.isAvailable);
    return 0;
}
