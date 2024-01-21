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

for (a = 0; a < 3; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{
if ((a + b) <= 5)
{
putchar(a + '0');
putchar(b + '0');
putchar(58);
putchar(c + '0');
putchar(d + '0');
putchar('\n');
}
}
}
}
}
}
