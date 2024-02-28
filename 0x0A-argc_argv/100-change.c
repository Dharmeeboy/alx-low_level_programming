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
int cents = 0;
int num;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);

while (num > 0)
{
if (num >= 25)
{
num -= 25;
cents += 1;
}
else if (num >= 10 && num < 25)
{
num -= 10;
cents += 1;
}
else if (num >= 5 && num < 10)
{
num -= 5;
cents += 1;
}
else if (num >= 2 && num < 5)
{
num -= 2;
cents += 1;
}
else if (num)
{
num -= 1;
cents += 1;
}
}
printf("%d\n", cents);
return (0);
}
