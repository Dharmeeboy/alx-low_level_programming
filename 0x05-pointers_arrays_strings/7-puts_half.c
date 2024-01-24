#include <stdio.h>
#include "main.h"

/**
* puts_half - print every other string
* @str: string to be printed
* Return: always 0
*/


void puts_half(char *str)
{
int i = 0, a;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
i = i / 2;
}
else
{
i = (i - 1) / 2;
}

for (a = 0; str[a] != '\0'; a++)
{
if (a >= i)
{
putchar(str[a]);
}
}
putchar('\n');
}
