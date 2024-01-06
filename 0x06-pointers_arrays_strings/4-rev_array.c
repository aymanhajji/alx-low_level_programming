#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array of integer
 * @n: an integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		a[i] = a[n - 1 - i];
	}
}
