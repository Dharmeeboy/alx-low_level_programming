#include <stdio.h>
#include "main.h"

/**
* _strcpy - copy string from src to dest
* @dest: pointer to destination
* @src: pointer to source
* Return:  a pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

