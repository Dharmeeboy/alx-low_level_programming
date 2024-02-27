#include <stdio.h>
#include "main.h"

/**
* check_num - check if the number is a prime number
* @a: numbers to be checked
* @b: number to be checked
* Return: return prime number
*/


int check_num(int a, int b)
{
if (a == b - 1)
{
return (1);
}
else if ((b % a) == 0)
{
return (0);
}
else if ((b % a) != 0)
{
return (check_num(a + 1, b));
}
return (0);
}

/**
* is_prime_number - check if the number is a prime number
* @n: numbers to be checked
* Return: 1 if number n is a prime number
*/

int is_prime_number(int n)
{
int x;
x = 2;

if (n < 2)
{
return (0);
}
else if (n == 2)
{
return (1);
}
return (check_num(x, n));
}
