#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* array_range - function that creates an array of integers
* @min: the minimum value of the array
* @max: the maximum value of the array
* Return: pointer to the array
*/

int *array_range(int min, int max)
{
int *array;
int i;
int size;
if (min > max)
{
return (NULL);
}
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
return (NULL);
}
size = max - min + 1;
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
