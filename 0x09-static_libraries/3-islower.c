#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _islower - Entry Point
* Return: 0 (success)
* @c:the alphabet
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
