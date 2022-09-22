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
	int dest_len = 0, index;

	while (dest[dest_len])
		dest_len++;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[dest_len] =src[index];
		dest_len++;
	}
	
	dest[dest_len] = '\0';
	return (dest);

}
