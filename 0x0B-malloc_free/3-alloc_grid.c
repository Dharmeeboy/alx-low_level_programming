#include <stdlib.h>
#include <stdlib.h>

/**
* alloc_grid - allocates memory for an array of integers
* @width: width of the array
* @height: height of the array
* Return: pointer to the array, or NULL if it fails
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (height <= 0 || width <= 0)
{
return (NULL);
}
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *) malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
free(grid);
for (j = 0; j <= i; j++)
{
free(grid[j]);
}
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
