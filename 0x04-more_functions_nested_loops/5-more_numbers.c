#include <stdio.h>
#include "main.h"

/**
* more_numbers - print numbers 10 times
* Return: 0 (success)
*/

void more_numbers(void)
{
int j = 0, k;
while (j <= 9)
{
k = 0;
while (k <= 14)
{
if (k > 9)
{
_putchar(k / 10 + '0');
}
_putchar(k % 10 + '0');
k++;
}
j++;
_putchar('\n');
}
}
