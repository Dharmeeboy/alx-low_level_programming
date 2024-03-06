#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: size of the memory to be allocated
  * Return: pointer to the allocated memory
  */


void *malloc_checked(unsigned int b)
{
char *space;
space = malloc(b);
if (space == NULL)
{
exit(98);
}
return (space);
}
