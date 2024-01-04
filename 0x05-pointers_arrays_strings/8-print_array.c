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
	int num;

	for (i = 0 ; i < n ; i++)
	{
		num = a[i];
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num == 0)
		{
			_putchar('0');
			return;
		}
		if (num / 10)
		{
			print_long_int(num / 10);
		}
		_putchar((num % 10) + '0');
		if (n - i != 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
