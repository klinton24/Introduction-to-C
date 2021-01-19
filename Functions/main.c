#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Mike",1);
    sayHi("Tom",2);
    sayHi("Richard",3);

    return 0;
}

void sayHi(char name[], int number){
    printf("Hello %s, you are #%d.\n", name, number);
}
