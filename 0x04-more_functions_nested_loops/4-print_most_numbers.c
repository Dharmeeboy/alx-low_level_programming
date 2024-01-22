#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - print numbers from 0 - 9 without 2 and 4
* Return: 0 (success)
*
*/

void print_most_numbers(void)
{
int j = 0;
while (j < 10)
{
if (j != 2 && j != 4)
{
putchar(j + '0');
}
j++;
}
putchar('\n');
}
