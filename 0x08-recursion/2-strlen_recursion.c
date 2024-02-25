#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - prints the length of a string using recursion
* @s: string to be counted
* Return: number of characters in the string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
