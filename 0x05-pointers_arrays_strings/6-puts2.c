#include <stdio.h>
#include "main.h"

/**
* puts2 - print every other string
* @str: string to be printed
* Return: always 0
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
