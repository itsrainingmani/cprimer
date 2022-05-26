/* sphere.c */

#include <stdio.h> /* include header file for printf */

#define PI 3.141592654f /* define a constant */

/* function prototype. sphere is given internal linkage with the keyword 'static' since it isn't used outside of this translation unit */
static float sphere(float);

int main(void)
{
  float volume;
  float radius = 3;

  volume = sphere(radius);
  printf("Volume: %f\n", volume);

  return 0;
}

float sphere(float rad)
{
  /* result is defined with automatic storage duration and block scope */
  float result;

  result = rad * rad * rad;
  result = 4 * PI * result / 3;
  return result;
}