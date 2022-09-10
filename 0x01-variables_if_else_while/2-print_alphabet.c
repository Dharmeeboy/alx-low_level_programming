#include <stdio.h>
/**
 * main-prints letters of the alphabet in lower case
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');

	return (0);
}

