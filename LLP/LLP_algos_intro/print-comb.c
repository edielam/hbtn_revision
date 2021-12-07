#include <stdio.h>
/**
 * main - print numbers
 * Return: always zero
 */

int main(void)
{
  int ch = '0';
  for (;ch < 58; ch++)
    {
      putchar(ch);
      if (ch > 47 && ch < 57)
	{
	  putchar(44);
	  putchar(32);
	}
    }
  putchar('\n');
  return (0);
}
