#include "main.h"
/**
 *_isalpha -> to check if a character is an alphabet
 *
 *@c: param to be checked if it is an alphabet
 *
 *Return: 1 if it is alphabet or 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
