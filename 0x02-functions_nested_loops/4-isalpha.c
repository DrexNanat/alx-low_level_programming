#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Shows 1 if the input is a letter
 * Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: return 0 on success and 1 on fail
 */

int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
