#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers followed by a new line
  * @separator: string to separate numbers
  * @n: number of integers
  * @...: integers to print
  * Return: void
  *
  */



void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;
va_start(lst, n);

if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
printf("%d", va_arg(lst, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
}
