#include "main.h"
/**
 * main - prints letters of the alphabet
 *
 * Return: Always success
 *
 */

void print_alphabet(void)
{
	char c; 

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');

}
