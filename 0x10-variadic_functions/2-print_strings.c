#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to separate numbers
 * @n: number of integers
 * @...: integers to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;
char *str;
va_start(lst, n);
if (separator == NULL)
{
separator = " ";
}
for (i = 0; i < n; i++)
{
str = va_arg(lst, char *);
if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(lst);
}
