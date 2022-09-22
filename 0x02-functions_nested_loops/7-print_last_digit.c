#include "main.h"
/**
 *print_last_digit -> print the last digit of a number
 *
 *@a: param for evaluation
 *
 *Return: always success
 *
 */

int print_last_digit(int a)
{
	int r;

	if (a > 9)
	{
		r = a % 10;
	}
	else
		r = a;

	_putchar(r + '0');
	return (0);
}
