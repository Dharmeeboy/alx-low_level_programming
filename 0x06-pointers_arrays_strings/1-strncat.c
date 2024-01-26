#include <stdio.h>
#include "main.h"

/**
* _strncat - appends text to the end of a string
* @dest: initial string
* @src: string to be appended
* @n: number of characters to concatenate
* Return: returns a pointer to dest
*/


char *_strncat(char *dest, char *src, int n)
{
int i = 0, a = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[a] != '\0')
{
if (a < n)
{
dest[i + a] = src[a];
}
a++;
}
if (a < n)
{
dest[i + a] = '\0';
}
return (dest);
}
