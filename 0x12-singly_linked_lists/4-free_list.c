#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer to the head of a list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
