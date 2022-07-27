#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: address of striong to copy
 * Return: address of duplicate string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, j = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
		i++;

	copy = (char *) malloc(1 + sizeof(char) * i);

	if (!copy)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
