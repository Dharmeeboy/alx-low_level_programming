#include "main.h"

/**
 *strcat - Concatenates strings pointed by @src
 *
 *@dest: A pointer to the destination string
 *
 *@src: A pointer to the string to be appended
 *
 * Return: A pointer to the destination string @dest
 *
 */

char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;

	}
	dest[len] = '\0';
	return (dest);
}
