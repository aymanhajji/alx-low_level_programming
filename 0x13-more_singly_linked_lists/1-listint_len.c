#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
		elements++;
	}
	return (elements);
}
