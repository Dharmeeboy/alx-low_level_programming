#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
char s[] = "_putchar";
unsigned int i;
for (i = 0; i < strlen(s); i++)
{
_putchar(s[i]);
}
_putchar('\n');
return (0);
}
