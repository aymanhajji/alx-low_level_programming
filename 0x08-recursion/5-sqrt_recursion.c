#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns thhe natural square root of a number
 * @n: integer
 * @guess: integer
 *
 * Return: int
 */
int _helper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
		return (guess);
	}
	else if (square > n)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, guess + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_helper(n, 0));
}
