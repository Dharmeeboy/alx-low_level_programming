#include <stdio.h>
/**
 * main-print numbers in Hexadecimal
 *
 * Return: Always(Success)
 *
 */

int main(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');	
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
