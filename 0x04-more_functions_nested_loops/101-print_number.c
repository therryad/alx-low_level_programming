#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int s;

	if (n < 0)
	{
		s = -n;
		_putchar('-');
	}
	else
	{
		s = n;
	}

	if (s / 10)
	{
		print_number(s / 10);
	}

	_putchar((s % 10) + '0');
}
