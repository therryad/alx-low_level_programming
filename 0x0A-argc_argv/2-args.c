#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *  @argc: The arguement counter
 *  @argv: The arguement values
 *  Return: 0 success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
