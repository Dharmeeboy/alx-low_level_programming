#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - prints a string by recursion
* @s: string to be printed
* Return: Always success (0)
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
printf("%c", *s);
_puts_recursion(s + 1);
}
