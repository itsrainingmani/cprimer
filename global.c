#include <stdio.h>

void somefunc(void);
int globalvar;

void main()
{
  extern int globalvar;
  somefunc();
  printf("%d\n", globalvar);
}

void somefunc(void)
{
  extern int globalvar;
  printf("%d\n", globalvar);
  globalvar = 13;
}