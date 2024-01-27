#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: int
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*operation)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	if (operation == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
