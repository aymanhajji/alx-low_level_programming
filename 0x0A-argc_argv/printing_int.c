#include <stdio.h>
#include "main.h"
/**
 * print_int - prints an integer and jumps a line
 * @num: integer
 *
 * Return: void
 */
void print_int(int num)
{
	int reversed;

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

	reversed = 0;

	while (num > 0)
	{
		reversed = reversed * 10 + (num % 10);
		num /= 10;
	}
	while (reversed > 0)
	{
		_putchar('0' + (reversed % 10));
		reversed /= 10;
	}
	_putchar('\n');
}
