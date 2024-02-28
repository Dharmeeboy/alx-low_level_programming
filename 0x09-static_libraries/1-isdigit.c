#include <stdio.h>
#include "main.h"

/**
* _isdigit - check if a character is a digit
* @c: character to be checked
* Return: 0 (success)
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
