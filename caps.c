#include <stdio.h>
#include <ctype.h>

#define SEEK 0
#define REPLACE 1

// The following filter capitalizes the first character in each word in the input
// The program operates as a state machine, using a variable that can be set to different values or states.

// The program has two states -
// SEEK, in which it is looking for the first char
// REPLACE, in which it is looking for the end of the word
int main(void)
{
  int ch, state = SEEK;
  while ((ch = getchar()) != EOF)
  {
    switch (state)
    {
    case REPLACE:
      switch (ch)
      {
      case ' ':
      case '\t':
      case '\n':
        state = SEEK;
        break;
      default:
        ch = tolower(ch);
        break;
      }
      break;
    case SEEK:
      switch (ch)
      {
      case ' ':
      case '\t':
      case '\n':
        break;
      default:
        ch = toupper(ch);
        state = REPLACE;
        break;
      }
    }
    putchar(ch);
  }
  return 0;
}