#include "main.h"

/**
 * main - check the code
 * let the numbers speak for themselves
 * Return: always void
 */
void Print_numbers(void)
{
	int i = 48; /* ascii: 0 */

	while (i <= 57) /* ascii: 9 */
	{
		_putchar(i++);
	}
	_ptchar('\n');
}
