#include "main.h"
#include <stdio.h>
/**
 *rev_string -> Reverse the strig
 *
 *@s: the string to be reversed
 *
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; inded >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[lem - index - 1];
		s[len - index - 1] = tmp;
	}
}
