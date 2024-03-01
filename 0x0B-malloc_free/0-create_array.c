#include <stdlib.h>

/**
* create_array - creates an array of chars.
* @size: size of the array
* @c: character to initialize the array with
* Return: pointer to the array (Success), NULL (Error)
*/


char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}

arr = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
