#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_sign - Entry Point
* @c: check for sign in this parameter
* Return: 0 (success)
*/

int print_sign(int c)
{
if (c > 0)
{
_putchar("+");
return (1);
}
else if (c < 0)
{
_putchar("-");
return (-1);
}
else
{
_putchar("0");
return (0);
}
}

