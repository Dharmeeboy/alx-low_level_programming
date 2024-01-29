#include <stdio.h>
#include "main.h"

/**
* string_toupper - convert string to uppercase
* @p: string to be converted
* Return: returns pointer to the new string
*/

char *string_toupper(char *p)
{
int i = 0;
while (p[i] != '\0')
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 32;
}
i++;
}
return (p);
}
