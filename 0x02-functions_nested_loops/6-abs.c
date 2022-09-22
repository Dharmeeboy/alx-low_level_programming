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
		a = a * -1;
	}

	return (a);
}

