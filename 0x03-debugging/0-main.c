#include <stdio.h>
#include "main.h"

/**
 * main - tests the function if it prints negative or positive
 *
 * Return: 0
 */
int main(void)
{
	void test_positive_or_negative() {
		printf("Test 1 - ");
		positive_or_negative(10);
		
		printf("Test 2 - ");
		positive_or_negative(0);
		
		printf("Test 3 - ");
		positive_or_negative(-5);
	}
	return (0);
}
