#include <stdio.h>
#include <main.h>

/**
* print_rev - print a string in reverse
* @s: string to be printed
* Return: always 0
*/


void print_rev(char *s)
{
int i, a;
while (s[i] != '\0')
{
i++;
}
for (a = i; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
