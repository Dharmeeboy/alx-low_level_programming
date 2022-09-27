#include "main.h"

/*
 * _memset - fills the first n bytes of the memory area
 * @b: the constant byte to be filled in
 *
 * @n: the size of bytes to be filled
 *
 * Return: the memory area filled
 *
 * description _memset
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	unsigned char *memory = s, value = c;

	for (a = o; a < n; a++)
	{
		memory[a] = value;
	}
	return (memory);
}

