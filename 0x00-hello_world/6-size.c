#include <stdio.h>

/**
 * main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char), "Size of an int: %ld byte(s)\n", sizeof(int), "Size of a long int: %ld byte(s)\n", sizeof(long int), "Size of a long long int: %ld byte(s)\n", sizeof(long long int), "Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
