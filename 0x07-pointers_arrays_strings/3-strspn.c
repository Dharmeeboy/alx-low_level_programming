#include <stdio.h>
#include "main.h"

/**
* _strspn - unction fills the first n bytes of the memory
* @s: destination
* @accept: source
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j, check;
unsigned int n = 0;
for (i = 0; s[i] != '\0'; i++)
{
check = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
check = 1;
}
}
if (check == 0)
{
return (n);
}
}
return (n);
}
