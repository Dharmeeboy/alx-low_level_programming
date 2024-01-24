#include <stdio.h>
#include "main.h"

/**
* print_rev - print a string in reverse
* @s: string to be printed
* Return: always 0
*/


void print_rev(char *s)
{
int i, a;
while (*s != '\0')
{
i++;
s++;
}
s = s - i;
a = i;
while (a > 0)
{
putchar(s[a - 1]);
a--;
}
}
