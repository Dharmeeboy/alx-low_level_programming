#include <stdio.h>
#include "3-calc.h"

/**
* main - check the code for Holberton School students.
* @argc: argument count.
* @argv: argument vector.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
int a;
int b;
int (*op_func)(int, int);
int answer;
if (argc != 4)
{
printf("Error\n");
return (1);
}
if (argv[2][1])
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
printf("Error\n");
return (1);
}
answer = op_func(a, b);
printf("%d\n", answer);
return (0);
}
