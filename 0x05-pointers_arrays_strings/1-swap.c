#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps to integers
 * @a: the pointer to the integer that we will be swaping
 * @b: the pointer to the integer that we will be swaping with a
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
