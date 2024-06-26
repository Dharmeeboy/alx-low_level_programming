#include <stdarg.h>
/**
 * sum_them_all - return the sum of all its parameters
 * @n: the number of arguments passed to the function
 * @...: a variable number of arguments
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list args;
int sum = 0;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
