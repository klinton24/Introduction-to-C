#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char verb[20];
    char noun[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a verb: ");
    scanf("%s", verb);
    printf("Enter a noun: ");
    scanf("%s", noun);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I don't %s at night\n", verb);
    printf("Cause I'm thinking of %s\n", noun);


    return 0;

}

