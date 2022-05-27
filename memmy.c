/* memmy.c */

#include <stdio.h>
#include <stdlib.h> // for malloc and exit functions

int main()
{
  char *p;        // pointer to array
  unsigned count; // size of array

  puts("Size of array?");
  scanf("%d", &count);       // get size in bytes
  p = malloc((size_t)count); // allocate array

  if (p == NULL) // check for failure
  {
    puts("Can't allocate memory");
    exit(0);
  }

  puts("Allocated array");

  free(p); // release memory
  return 0;
}