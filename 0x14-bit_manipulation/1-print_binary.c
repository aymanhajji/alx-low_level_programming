#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits;
	int i;
	unsigned long int mask;
	bool value;

	value = false;
	bits = sizeof(n) * 8;
	for (i = bits - 1 ; i >= 0 ; i--)
	{
		mask = 1UL << i;
		if (n == 0)
		{
			_putchar('0');
			break;
		}
		else if (((n & mask) ? '1' : '0') == '0' && (value == true))
		{
			_putchar((n & mask) ? '1' : '0');
		}
		else if (((n & mask) ? '1' : '0') == '1' && (value == false))
		{
			value = true;
			_putchar('1');
		}
		else if (((n & mask) ? '1' : '0') == '1' && (value == true))
		{
			_putchar('1');
		}
	}
	_putchar('\n');
}
