#include "main.h"
/**
 *int _abs -> to print the absolute value of an integer
 *
 *@int: param
 *
 *Return: Absolute Value
 */

int _abs(int a)
{
	if (a < 0)
	{
		_putchar("%d", a * -1);
	}
	else
	{
		_putchar(a);
	}


}

