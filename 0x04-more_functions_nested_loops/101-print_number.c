#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int s, c, count;

	if (n < 0)
	{
		_putchar(45);
		s = n * -1;
	}
	else
	{
		s = n;
	}

	c = s;
	count = 1;

	while (c < 9)
	{
		c /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((s / count) % 10) + 48);
	}
}
