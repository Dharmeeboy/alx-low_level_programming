#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the size of different data types
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c;
	int p;
	long int t;
	long long int r;
	float y;

	printf("Size of a char : %lu. bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int : %lu. bytes(s)\n", (unsigned long)sizeof(p));
	printf("Size of a long int : %lu. bytes(s)\n", (unsigned long)sizeof(t));
	printf("Size of a long long int : %lu. bytes(s)\n", (unsigned long)sizeof(r));
	printf("Size of a float : %lu bytes(s)\n", (unsigned long)sizeof(y));

	return (0);
}

