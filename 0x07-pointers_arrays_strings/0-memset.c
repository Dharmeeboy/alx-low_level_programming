#include "main.h"
#include <stdio.h>

/*
 *_memset -> fills the first n bytes of the memory area
 *
 * b: the constant byte to be filled in
 *
 * n: the size of bytes to be filled
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = o; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

