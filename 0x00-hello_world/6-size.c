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
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(e));
	return (0);
}

