#include <stdio.h>
/**
 * main - Printing lowercase alphabets in reverse
 * Return: always zero
 */

int main(void)
{
  int ch = 'z';
  for(ch; ch > 96 ; ch--){
    putchar(ch);
  }
  putchar('\n');
  return (0);
}
    
