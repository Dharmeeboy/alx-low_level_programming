#include <stdio.h>
#include "main.h"


/**
* jack_bauer - Print every minute of 24hrs
*
* Return: 0 (success)
*/

void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a <= 2; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
if ((a + b) <= 5)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(58);
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
}
}
}
