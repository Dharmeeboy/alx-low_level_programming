#include <stdio.h>
#include "main.h"

/**
* _memset - Enrty point
* @s: pointer to memory area
* @b: byte
* @n: number of memory spaces to be filled
* Return: Always 0 (success)
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
