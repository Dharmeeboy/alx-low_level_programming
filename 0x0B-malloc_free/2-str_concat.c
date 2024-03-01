#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
concat[i + j] = s2[j];
}
concat[i + j] = '\0';
return (concat);
}

