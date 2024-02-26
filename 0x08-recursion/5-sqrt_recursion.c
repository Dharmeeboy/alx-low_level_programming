#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - calculates the square
* @n: number
* Return: returns square root of n
*/

int _checker(int a, int b)
{
if(b == 0 || b == 1)
{
return (1);
}
else if ((a * a) == b)
{
return (a);
}
else if((a * a) < b)
{
return _checker(a + 1, b);
}
return (-1);
}



int _sqrt_recursion(int n)
{
int x;
x = 0;
if (x < 0)
{
return (-1);
}
else
{
return (_checker(x, n));
}
}
