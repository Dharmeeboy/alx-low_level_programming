#include <stdio.h>
#include "main.h"

/**
* times_table - Print the times table of 9
*
* Return: 0 (success)
*/


void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else
{
_putchar(' ');
_putchar((c % 10) + '0');
}
if (b <= 8)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}


