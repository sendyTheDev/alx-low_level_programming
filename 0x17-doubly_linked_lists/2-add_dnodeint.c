#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to front
 * @n: node data
 * @head: pointer to head of list
 *
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
