#include <stdio.h>
#include "main.h"

/**
* print_diagonal - print line
* @n: the number of lines to be printed
* Return: 0 (success)
*/

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j != i)
{
_putchar(32);
}
else
{
_putchar(92);
}
}
printf("\n");
}
}

