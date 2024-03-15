#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
