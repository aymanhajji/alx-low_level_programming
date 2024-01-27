#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - addition
 * @a: integer
 * @b: integer
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference
 * @a: integer
 * @b: integer
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product
 * @a: integer
 * @b: integer
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: integer
 * @b: integer
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division
 * @a: integer
 * @b: integer
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (100);
	}
	return (a % b);
}
