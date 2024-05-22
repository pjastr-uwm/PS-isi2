#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    double width;
    double height;
    char * color;
};

int main()
{
    struct Rectangle tab[] ={
        { 3.4, 2.6, "blue"},
        { 2.2, 2.2, "red"},
        { 5.9, 11.2, "green"},
        { 7.3, 8.22, "black"}
    };
    return 0;
}
