#include <stdio.h>
#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: destination
* @to: source
* Return: Always success (0)
*/

void set_string(char **s, char *to)
{
*s = to;
}
