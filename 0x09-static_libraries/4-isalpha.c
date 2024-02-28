#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _isalpha - Entry Point
*
* @c: parameter to be checked
* Return: 0 (success)
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
