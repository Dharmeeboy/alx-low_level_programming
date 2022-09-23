#include "main.h"

/**
 *_strcpy -> Copy and paste string
 *
 *@dest: destination
 *
 *@src: source
 *
 *Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int pin = 0;

	while (*(src + pin) != '\0')
	{
		*(dest + pin) = *(src + pin);
		pin++;
	}
	*(dest + pin) = '\0';

	return (dest);
}
