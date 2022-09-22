#include "main.h"
/**
 *_abs -> to print the absolute value of an integer
 *
 *@a: param to print absolute value from
 *
 *Return: Absolute Value
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}

	return (a);
}

