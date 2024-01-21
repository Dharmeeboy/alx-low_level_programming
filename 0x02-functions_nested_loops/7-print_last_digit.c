#include <stdio.h>
#include <string.h>

/**
* print_last_digit - Entry Point
*
* @c: parameter to be checked
* Return: 0 (success)
*/

int print_last_digit(int c)
{
int last_digit;
last_digit = c % 10;
if (last_digit < 0)
{
return (last_digit * -1);
}
_putchar(last_digit + '0');
return (last_digit);

}
