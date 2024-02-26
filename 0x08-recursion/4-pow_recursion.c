#include <stdio.h>
#include "main.h"


/**
* _pow_recursion - calculates the factorial of a number n
* @x: number
* @y: power
* Return: returns power of number x
*/


int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * (_pow_recursion(x, y - 1)));
}
