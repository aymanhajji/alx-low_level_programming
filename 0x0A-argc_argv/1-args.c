#include <stdio.h>
#include "main.h"
/**
 * main - the main file
 * @argc: integer
 * @argv: pointer to a char
 *
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	int i;
	int tempArgCount;
	int digit;

	i = 0;
	(void)argc;

	while (argv[i] != 0)
	{
		i++;
	}

	tempArgCount = i - 1;

	if (i > 0)
	{
		i--;
	}

	if (tempArgCount == 0)
	{
		_putchar('0' + tempArgCount);
	}

	while (tempArgCount > 0)
	{
		digit = tempArgCount % 10;
		_putchar('0' + digit);
		tempArgCount /= 10;
	}
	_putchar('\n');

	return (0);
}
