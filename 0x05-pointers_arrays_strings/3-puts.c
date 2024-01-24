#include <stdio.h>
#include "main.h"

/**
* _puts - print a string
* @str: string to be printed
* Return: always 0
*/

void _puts(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
putchar('\n');
}
