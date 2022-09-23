#include <stdio.h>
#include "main.h"

/**
 *print_array -> prints n element of the array
 *
 *@a: array
 *
 *@n: number of element
 *
 *Return: Nothing
 */

void print_array(int *a, int n)
{
	int pin;

	for (pin = 0; pin < n; pin++)
	{
		if (pin != n - 1)
			printf("%d, " a[pin]);
		else
			prinf("%d, ", a[pin]);
	}
	putchar(10);
}
