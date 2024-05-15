#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * firstName;
    char * lastName;
    int id;
    float gpa;
} Student;

int main()
{
    Student s1 = {"Jan", "Kowalski", 1, 3.4};
    Student s2 = {"Anna", "Nowak", 2, 23.2};
    Student s3 = {"Tomasz", "Kowalski", 3, 5.3};
    int tablica[] = {4,5,-6};
    Student tab[] = {s1,s2,s3};
    Student tab2[] ={
        {"Jan", "Kowalski", 1, 3.4},
        {"Anna", "Nowak", 2, 23.2},
        {"Tomasz", "Kowalski", 3, 5.3}
    };
    return 0;
}
