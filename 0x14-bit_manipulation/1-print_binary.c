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

	bits = sizeof(n) * 8;
	for (i = bits - 1 ; i >= 0 ; i--)
	{
		mask = 1UL << i;
		_putchar((n & mask) ? '1' : '0');
	}
	_putchar('\n');
}
