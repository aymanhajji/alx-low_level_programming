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
	int shift;

	shift = sizeof(unsigned long int) * 8 - 1;
	while (!(n >> shift))
	{
		shift--;
	}
	for (; shift >= 0 ; shift--)
	{
		_putchar((n & (1UL << shift)) ? '1' : '0');
	}
}
