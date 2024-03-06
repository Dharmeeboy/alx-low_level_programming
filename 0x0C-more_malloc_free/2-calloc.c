#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * _calloc - function that allocates memory using calloc
  * @nmemb: number of elements
  * @size: size of each element
  * Return: pointer to the allocated memory
  */


void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
