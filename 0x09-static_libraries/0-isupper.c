#include <stdio.h>
#include "main.h"

/**
* _isupper - check if an alphabet is in uppercase
* @c: alphabet to be checked
* Return: 0 (success)
*/


int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
