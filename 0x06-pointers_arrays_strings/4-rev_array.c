#include <stdio.h>
#include "main.h"

/**
* reverse_array - reverse an array of integers
* @a: array to be reversed
* @n: number of elements in the array
* Return: returns void
*/

void reverse_array(int *a, int n)
{
int b;
int c;
n = n - 1;
for (b = 0; b <= n / 2; b++)
{
c = a[b];
a[b] = a[n - b];
a[n - b] = c;
}
}
