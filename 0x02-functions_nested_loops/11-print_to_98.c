#include <stdio.h>
#include "main.h"

/**
* add - add two integers
*
* Return: 0 (success)
*/


void print_to_98(int n)
{
int b;
for (b = n; b <= 98; b++)
{
if (b > 9)
{
putchar((b / 10) + '0');
putchar((b % 10) + '0');
}
else
{
putchar((b % 10) + '0');
}
if (b < 98)
{
putchar(44);
putchar(32);
}
}
