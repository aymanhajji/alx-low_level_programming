#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of elements in a list
 * @h: pointer to the head of a list that we gonna be printing
 *
 * Return: size_t number of element in a list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
