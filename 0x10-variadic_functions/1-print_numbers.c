#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: const char
 * @n: unsigned int
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);


	for (i = 0 ; (unsigned int)i < n - 1 ; i++)
	{

		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("%d", va_arg(args, int));
	printf("\n");
}
