#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers
 *@separator: char pointer argument
 *@n: integer argument
 *@...: unnamed argument
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ap;

	va_start(ap, n);
	for (; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
