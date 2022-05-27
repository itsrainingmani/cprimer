#include <stdio.h>

// conditional compilation directives to define which
// blocks of code are passed to the C compiler
#if WIN == 1
#include "./libs/win.c"
#elif MAC == 1
#include "./libs/mac.c"
#else
#include "./libs/linux.c"
#endif

// #define DEBUG 1

/* function-like macros that allow parameter substituion */
#define ABS(value) ((value) >= 0 ? (value) : -(value))

int main()
{
#if !defined(DEBUG)
  printf("Not debug mode!\n");
#endif

  // the heehee function is defined in win.c, mac.c and linux.c but with a different function body
  heehee();

  int x = -42;
  printf("Absolute value of x = %d\n", ABS(x));

  return 0;
}