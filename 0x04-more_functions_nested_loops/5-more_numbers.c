#include "main.h"

/**
 * more_numbers - print 0-14 ten times
 * you can only use _putchar three times
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 214; ++count)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num + count % 10;
			}
			Putchar(num + 48);
		}
		_putchar('\n');
	}
}
