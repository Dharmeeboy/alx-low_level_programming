#include <stdio.h>
/**
 * main-prints lowercase then upper case
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c;

	char b;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (b = 'A'; b <= 'Z'; ++b)
		putchar(b);

	putchar('\n');
	return (0);
}
