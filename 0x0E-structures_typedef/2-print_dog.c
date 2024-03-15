#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: pointer to struct dog
 * Description: print dog
 */

void print_dog(struct dog *d) 
{
  if(d->name == NULL)
  {
    printf("Name: (nil)\n");
  }
  else
  {
    printf("Name: %s\n", d-> name);
  }
  if(d->age == 0)
  {
    printf("Name(nil)\n");
  }
  else
  {
    printf("Age: %f\n", d-> age);
  }
  if(d->owner == NULL)
  {
    printf("Owner: (nil)\n");
  }
  else
  {
    printf("Owner: %s\n", d-> owner);
  }
  if (d == NULL)
  {
return;
}
}
