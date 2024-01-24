#include <stdio.h>
#include "main.h"

/**
* print_rev - print a string in reverse
* @s: string to be printed
* Return: always 0
*/


void print_rev(char *s)
{
int i = 0, a;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (a = i; a > 0; a--)
{
putchar(*s);
s--;
}
putchar('\n');
}
