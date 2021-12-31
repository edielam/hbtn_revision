#include <stdio.h>
#include <stdlib.h>

int increment()
{
    int count = 0;
    count = count + 1;
    return count;
}

int main()
{
    int value;
    value = increment();
    value = increment();
    printf("%d\n", value);
    return value;
}