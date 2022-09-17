#include "main.h"

/**
 * more_numbers - print 0-14 ten times
 * you can only use _putchar three times
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int h, i;

	for (h = 0; <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
