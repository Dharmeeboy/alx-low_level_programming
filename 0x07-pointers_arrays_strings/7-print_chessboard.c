#include <stdio.h>
#include "main.h"

/**
* print_chessboard - function thats prints members of 2-D array
* @a: pointer to an array
* Return: Always success (0)
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", *(*(a + i) + j));
if (j == 7)
{
printf("\n");
}
}
}
}
