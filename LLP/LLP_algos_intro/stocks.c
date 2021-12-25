#include <stdio.h>
#include <stdlib.h>

/**
 * main - take order and show remaining stock
 * return: 0
 */

int main(void) 
{
    int stock = 180;
    int order_string;
    int order;
    while (stock > 0) {
        printf("%i glasses left\n", stock);
        scanf("%i", &order_string);
        //order = atoi(order_string);
        stock = stock - order_string;
        printf("You have ordered %i glasses\n", order_string);
    }
    puts("We are out of stock baby!");
    return (0);
}