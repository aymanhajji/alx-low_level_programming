#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
}
