#include <stdio.h>
#include "main.h"
/**
* cap_string - capitalize the first word of every string
* @p: string to be converted
* Return: returns pointer to the new string
*/

char *cap_string(char *p)
{
char puncts[] = {',', ';', '.', '!', '?', '"',
'(', ')', '{', '}', ' ', '\t', '\n'};


int i, d, m = sizeof(puncts) / sizeof(char);
for (i = 0; p[i] != '\0'; i++)
{
for (d = 0; d <= m; d++)
{
if (p[i - 1] == puncts[d])
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 32;
}
}
}
}
return (p);
}
