#include "main.h"
#include <stdio.h>

/**
 * _strcat - joins two strings
 * @dest: destination string
 * @src: Source string
 *
 * Return: A pointer to dest
 *
 */

char *_strcat(char *dest, char *src);
{
	int len = 0, i = 0;

	while (dest[len++])
	{
		i++;
	}

	for (len = 0; src[i] != 0; len++)
	{
		dest[i++] = src[len];
	}

	return (dest);
}


