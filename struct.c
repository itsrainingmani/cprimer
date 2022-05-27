#include <stdio.h>
#include <string.h>

/* custom data types */
typedef ch[128] str;

struct person /* define a structure type */
{
  char name[50];
  unsigned short age;
  float wage;
};

/* the values are just text constants associated to a set of consecutive int values */
enum day
{
  sat,
  sun,
  mon,
  tue,
  wed,
  thu,
  fri
};

/* you can assign any numbers to each variant */
enum temp
{
  zero = 0,
  freeze = 32,
  boil = 220
};

void display(struct person p);

int main()
{
  struct person m;
  strcpy(m.name, "Coyote, Wile E.");
  m.age = 41;
  m.wage = 25.50f;

  // if you have a ptr to a structure, you can access its fields with -> instead of .
  struct person *mptr = &m;
  strcpy(mptr->name, "Leghorn, Foghorn");
  display(m);

  enum day today = wed + tue;
  printf("Today is: %d\n", today);

  return 0;
}

void display(struct person p)
{
  printf("Name: %s\n", p.name);
  printf("Age: %d\n", p.age);
  printf("Wage: %f\n", p.wage);
}