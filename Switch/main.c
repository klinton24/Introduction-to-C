#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';

    switch(grade) {
    case 'A' :
        printf("You aced it!");
        break;
    case 'B' :
        printf("You did all right.");
        break;
    case 'C' :
        printf("You did poorly.");
        break;
    case 'D' :
        printf("You did very bad.");
        break;
    case 'F' :
        printf("You failed!");
        break;
    default :
        printf("Invalid Grade");
    }
    return 0;
}
