#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
* @argc: name of the program
* @argv: arguments passed
* Return: Always Success (0)
*/


int main(int argc, char *argv[])
{
int i;
int sum = 1;
if (argc == 1)
{
printf("Error\n");
}
else
{
for (i = 1; i < argc; i++)
{
sum *= atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}

