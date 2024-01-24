#include <stdio.h>

/**
* print_array - print to the nth element of an array
* @a: array to be printed
* @n: nth element
* Return: always 0
*/


void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
}

