#include <stdio.h>
#include "main.h"
/**
* _strlen - returns the length of a string
* @s:  string to be counted
* Return: always 0
*/

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return(i);
}
