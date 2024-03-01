#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2d array of integers
* @grid: pointer to the array to free
* @height: height of the array
* Return: nothing
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
