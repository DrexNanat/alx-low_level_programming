#include "main.h"

/**
 * main - check the code
 *
 * Return: Always
 */
void print_numbers(void);
{
	int i = 48; /* ascii: 0 */

	while (i <= 57) /* ascii: 9 */
	{
		_putchar(i++);
	}
	_putchar('\n');
}
