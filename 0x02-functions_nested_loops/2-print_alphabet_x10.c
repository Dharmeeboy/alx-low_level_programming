#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * Return: 0 (success)
 */


void print_alphabet_x10(void)
{
char c;
char d;
for (d = 0; d < 10; d++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}
_putchar('\n');
}
