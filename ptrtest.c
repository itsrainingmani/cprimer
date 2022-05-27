#include <stdio.h>
#include <string.h>

void somefunc(char *a);

int main()
{
  // name of the array actually specifies a pointer to the first element in the array
  char s[128];
  strcpy(s, "This is a test!"); // can't do char s[128] = "This is a test"
  puts(s);

  int *ptr;   // defines a pointer
  *ptr = 345; // set the value at the address pointed to by the pointer

  printf("%d\n", *ptr);

  int tmp; // defines an int and &tmp gives the address of the variable

  // somefunc(s);

  // "p" ends up being the pointer to the memory in which the C compler stores the string literal
  char *p;
  p = "Life, the Universe, & Everything";

  char ch;
  ch = "Life, the Universe, & Everything"[0]; // ch has the value "L"
}

void somefunc(char *a)
{
  printf("%s\n", a);
}