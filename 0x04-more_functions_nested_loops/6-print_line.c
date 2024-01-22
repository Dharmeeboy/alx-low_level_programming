#include <stdio.h>
#include "main.h"

/**
* print_line - print line
* @n: the number of lines to be printed
* Return: 0 (success)
*/

void print_line(int n)
{
int j;
if (n > 0)
{
j = 0;
while (j < n)
{
_putchar(95);
j++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}

