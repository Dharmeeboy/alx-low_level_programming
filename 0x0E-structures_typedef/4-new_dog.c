#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int len_name = strlen(name);
int len_owner = strlen(owner);
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (len_name + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len_owner + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
