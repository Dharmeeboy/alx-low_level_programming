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
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
