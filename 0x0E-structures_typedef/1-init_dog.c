#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Decription: initialize a struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner) 
{
  if (d == NULL)
    return;
  d->name = name;
  d->age = age;
  d->owner = owner;
}
