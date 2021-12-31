#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    printf("Please enter the number of rows: \n");
    scanf("%d", &v);

    for(int i=1; i <= v; i++)
    {
        for(int j = 1; j<= v; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return (0);
}