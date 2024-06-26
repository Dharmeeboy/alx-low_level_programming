/**
* int_index - searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: pointer to the function to be called
* Return: index of the first element in the array for which cmp returns true
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
}
return (-1);
}
