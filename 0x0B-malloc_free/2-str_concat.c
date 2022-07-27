#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, f;
	char *concatenated;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concatenated = malloc(sizeof(char) * (i + j) + 1);

	if (!concatenated)
		return (NULL);
	for (k = 0; k < i; k++)
		concatenated[k] = s1[k];
	for (f = 0; f <= j; f++)
		concatenated[k + f] = s2[f];

	return (concatenated);
}
