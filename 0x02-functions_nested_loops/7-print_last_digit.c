#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: is the number to take and return its last digit.
 *
 * Return: an integer that is the last digit
 */

int print_last_digit(int n)
{
	int r;
	r = n % 10;

	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
