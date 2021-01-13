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
    return 0;
}
