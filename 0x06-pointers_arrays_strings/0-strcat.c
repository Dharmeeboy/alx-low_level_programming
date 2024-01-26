#include <stdio.h>
#include "main.h"

/**
* _strcat - appends text to the end of a string
* @dest: initial string
* @src: string to be appended
* Return: returns a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0, a = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[a] != '\0')
{
dest[i + a] = src[a];
a++;
}
dest[i + a] = '\0';
return (dest);
}


