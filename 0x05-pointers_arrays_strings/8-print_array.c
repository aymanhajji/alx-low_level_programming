#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of an array of integers
 * @a: pointer to an integer
 * @n: the number of characters to display
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('0' + a[i]);
		if (n - i != 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
