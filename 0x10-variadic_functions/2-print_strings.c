#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @separator: pointer to a string
 * @n: unsigned int
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		if (va_arg(args, char) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(args, char));
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_endd(args);
	printf("\n");
}
