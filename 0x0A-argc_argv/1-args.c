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

	while (argv[i] != 0)
	{
		i++;
	}

	tempArgCount = argCount;

	while (tempArgCount > 0)
	{
		digit = tempArgCount % 10;
		_putchar('0' + digit);
		tempArgCount /= 10;
	}
	_putchar('\n');

	return (0);
}
