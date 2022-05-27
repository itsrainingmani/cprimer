#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define X 3
#define Y 4

int main()
{
  time_t starttime = clock();
  printf("%3.2f\n", pow(X, Y));

  // Converting a numeric string to int
  printf("%d\n", atoi("69"));

  // generate random nums
  // for (int i = 0; i < INT32_MAX; ++i)
  // {
  //   rand();
  // }

  time_t endtime = clock();
  printf("%ld\n", endtime - starttime);

  // system("pwd");
}