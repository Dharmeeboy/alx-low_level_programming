#include <stdio.h>
#include "main.h"
/**
* _strlen - returns the length of a string
* @s:  string to be counted
* Return: always 0
*/

int _strlen(char *s)
{
int count;
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < 128)
{
count++;
}
}
return (count);
}
