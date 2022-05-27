#include <stdio.h>

int main(void)
{
  unsigned int ch;

  // get a char and test it for EOF in the same expression
  while ((ch = getchar()) != EOF)
  {
    putchar(ch);
  }

  return 0;
}