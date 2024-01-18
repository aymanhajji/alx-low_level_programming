#include <stdio.h>
#include "main.h"
/**
 * toi - converts string to number
 * @str: pointer to a char
 *
 * Return: integer
 */
int toi(char *str)
{
	int result = 0;
	int sign = 1;

	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result * sign;
}
