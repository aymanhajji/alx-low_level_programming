#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a string
 * @f: pointer to a function that takes a char as an argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		(*f)(name++);
	}
}
