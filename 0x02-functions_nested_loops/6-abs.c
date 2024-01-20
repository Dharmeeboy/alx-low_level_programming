#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _abs - Entry Point
*
* @c: parameter to be checked
* Return: 0 (success)
*/

int _abs(int c)
{
if (c < 0)
{
return (c * -1);   
}
else
{
return (c);      
}
}
