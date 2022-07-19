#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: entire string.
 * @needle: substring.
 * Return:pointer to the beginning of located substring or else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[i + j] == '\0')
				return (haystack + i);
		}

	}
	return ('\0');
}
