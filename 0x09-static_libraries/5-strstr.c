#include <stdio.h>
#include "main.h"

/**
* _strstr - function locates a substring in a string
* @haystack: string
* @needle: substring
* Return: pointer to the substring found in string haystack
*/

char *_strstr(char *haystack, char *needle)
{
int i, j, check;
for (i = 0; haystack[i] != '\0'; i++)
{
check = 0;
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] == needle[j])
{
check = 1;
}
else
{
check = 0;
}
}
if (check == 1)
{
return (haystack + i);
}
}
}
return (NULL);
}
