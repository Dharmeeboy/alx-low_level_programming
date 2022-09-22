#include "main.h"
#include <string.h>  

/**
 *_strncat -> concatenates 2 strings
 *
 *@dest:destination string
 *
 *@src: string to be appended
 *
 *Return: string 
 *
 */

char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
