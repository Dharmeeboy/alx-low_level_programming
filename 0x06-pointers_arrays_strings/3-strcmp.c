#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares two strings and returns the difference
* between the first unequal strings
* @s1: string 1
* @s2: string 2
* Return: returns an int
*/


int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0;
while (s1[i] != '\0')
{
while (s2[j] != '\0')
{
if (s1[i] != s2[j])
{
if (s1[i] == ' ')
{
return (0 - s2[j]);
}
else if (s2[j] == ' ')
{
return (s1[i] - 0);
}
else
{
return (s1[i] - s2[j]);
}
}
else
{
i++;
j++;
}
}
}
}


