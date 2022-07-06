#include "main.h"

/**
 * _isalpha -shows 1 if c is a letter, lowercase or uppercase and 0 otherwise
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters and 0 for rest
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
