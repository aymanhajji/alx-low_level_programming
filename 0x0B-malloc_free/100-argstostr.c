#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: integer
 * @av: pointer to a char
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	int j;
	char *str;
	int pos;

	total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			total_length++;
		}
		total_length++;
	}

	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	pos = 0;

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
