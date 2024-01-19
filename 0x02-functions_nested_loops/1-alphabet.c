#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_alphabet - Entry Point
* Description: Print alphabets
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
