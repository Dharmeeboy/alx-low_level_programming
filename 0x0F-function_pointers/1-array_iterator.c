/**
* array_iterator - prints an array of integers
* @array: array of integers
* @size: size of the array
* @action: pointer to the function to be called
* Return: Nothing.
*/

#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array && action && size > 0)
while (i < size)
{
action(array[i]);
i++;
}
}
