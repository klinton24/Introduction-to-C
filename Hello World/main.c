#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("\n");

    char characterName[] = "Cameron";
    int characterAge = 35;
    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s but did not like being %d.\n", characterName, characterAge);

    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    /*
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\nt", age);

    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your grade is %s", name);
    */
    char fullName[20];
    printf("Enter your full name: ");
    fgets(fullName, 20, stdin);
    printf("Your full name is %s", fullName);

    return 0;
}
