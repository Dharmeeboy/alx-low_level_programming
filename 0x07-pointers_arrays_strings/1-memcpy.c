#include <stdio.h>
#include "main.h"

/**
* _memcpy - unction fills the first n bytes of the memory
* @dest: destination
* @src: source
* @n: number of memory spaces to be filled
* Return: Always 0 (success)
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
