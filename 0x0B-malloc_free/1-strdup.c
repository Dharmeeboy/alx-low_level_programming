#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *new_str;
unsigned int i, len;
if (str == NULL)
{
return (NULL);
}
new_str = malloc(sizeof(char) * (strlen(str) + 1));
if (new_str == NULL)
{
return (NULL);
}
len = strlen(str);
for (i = 0; i < len; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
