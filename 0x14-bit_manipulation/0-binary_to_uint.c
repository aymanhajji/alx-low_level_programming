#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an uint
 * @b: pointer to a string of zeros and ones
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int number;
	unsigned int start;

	i = 0;
	start = 0;
	number = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[start] != '\0')
	{
		if (b[start] != '0')
		{
			break;
		}
		else
		{
			start++;
		}
	}
	while (b[i + start] != '\0')
	{
		if (b[i + start] != '0' && b[i + start] != '1')
		{
			return (0);
		}
		number = (number << 1) | (b[i + start] - '0');
		i++;
	}
	return (number);
}
