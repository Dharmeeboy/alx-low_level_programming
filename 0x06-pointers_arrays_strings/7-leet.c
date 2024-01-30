#include <stdio.h>
#include "main.h"

/**
* leet - encode text
* @p: string to be converted
* Return: returns pointer to the encoded text
*/


char *leet(char *p)
{
char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

int i, d, m = sizeof(letters) / sizeof(char);

for (i = 0; p[i] != '\0'; i++)
{
for (d = 0; d < m; d++)
{
if (p[i] == letters[d])
{
p[i] = numbers[d];
}
}
}
return (p);
}
