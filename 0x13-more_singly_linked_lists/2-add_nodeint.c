#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of a list
 * @n: integer
 *
 * Return: pointer to the head of a linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;

	return (new);
}
