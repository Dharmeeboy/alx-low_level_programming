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
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
}
}


