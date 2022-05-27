#include <stdio.h>
#include <stdint.h>
#include <limits.h>

void itob(int8_t x, char *buf);

int main()
{
  char binary[32];
  // 00000010
  int8_t a = 2;
  a = ~a;
  itob(a, binary);
  printf("%s with size %ld\n", binary, sizeof(a));

  // b = 00000101, c = 00000110
  int8_t b = 5, c = 6;
  itob(b, binary);
  printf("Binary repr of %d is %s with size %ld\n", b, binary, sizeof(b));

  itob(c, binary);
  printf("Binary repr of %d is %s with size %ld\n", c, binary, sizeof(c));

  //    00000101
  // OR 00000110
  // =  00000111
  a = b | c;
  itob(a, binary);
  printf("%s with size %ld\n", binary, sizeof(a));

  // shift bits to the left by 2
  // 00000111 << 2
  // 00011100
  a <<= 2;
  itob(a, binary);
  printf("%d", a);
  printf(": %s\n", binary);

  // convert series of bits to 0
  a >>= sizeof(int) + 1;
  itob(a, binary);
  printf("%d", a);
  printf(": %s\n", binary);

  return 0;
}

void itob(int8_t x, char *buf)
{
  unsigned char *ptr = (unsigned char *)&x;
  int pos = 0;
  for (int i = sizeof(int8_t) - 1; i >= 0; i--)
    for (int j = CHAR_BIT - 1; j >= 0; j--)
      buf[pos++] = '0' + !!(ptr[i] & 1U << j);
  buf[pos] = '\0';
}