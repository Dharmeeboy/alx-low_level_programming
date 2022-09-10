#include <stdio.h>

/**
 * main-prints number less than 10 using putchar
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
