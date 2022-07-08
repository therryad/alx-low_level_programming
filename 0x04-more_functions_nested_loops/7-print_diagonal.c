#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

