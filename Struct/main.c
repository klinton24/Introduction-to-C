#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
    student1.age = 22;
    student1.gpa = 3.1;

    struct Student student2;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art");
    student2.age = 20;
    student2.gpa = 3.6;

    printf(student2.name);
    return 0;
}
