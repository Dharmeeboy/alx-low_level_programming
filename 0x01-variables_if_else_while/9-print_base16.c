#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(48+a);
}
for (a = 97; a <= 102; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
