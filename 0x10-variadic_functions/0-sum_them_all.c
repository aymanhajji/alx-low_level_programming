#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	int i;

	sum = 0;
	va_start(args, n);

	for (i = 0 ; (unsigned int)i < n ; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
