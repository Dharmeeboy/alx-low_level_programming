#include "main.h"
/**
 *_islower -> check if a character is lower case
 *
 *@c: parameter to be checked if its a lowercase alphabet
 *
 *Return: 1 if c is lowercase and 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
