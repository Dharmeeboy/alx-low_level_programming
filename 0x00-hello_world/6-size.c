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

	printf("Size of a char : %d bytes(s)\n", sizeof(c));
	printf("Size of an int : %d bytes(s)\n", sizeof(p));
	printf("Size of a long int : %d bytes(s)\n", sizeof(t));
	printf("Size of a long long int : %d bytes(s)\n", sizeof(r));
	printf("Size of a float : %d bytes(s)\n", sizeof(y));

	return (0);
}

