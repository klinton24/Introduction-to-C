#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[4][2] = {
                {1,2},
                {3,4},
                {5,6},
                {7,8}
                };
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            printf("%d\n", nums[i][j]);
        }
    }
    return 0;
}
