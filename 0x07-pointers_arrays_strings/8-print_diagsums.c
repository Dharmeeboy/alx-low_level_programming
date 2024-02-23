#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of diagonals
* @a: pointer to an array
* @size: size of the array
* Return: Always success (0)
*/

void print_diagsums(int *a, int size)
{
int i, j, y = 0, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i - j == 0)
{
sum1 = sum1 + a[y];
}
if (i + j == size - 1)
{
sum2 = sum2 + a[y];
}
y++;
}
}
printf("%d, %d\n", sum1, sum2);
}
