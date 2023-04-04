#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of list
 *
 * @head: head of singly linked list
 *
 * @n: singly linked list
 *
 * Return:  address of the new element
 * return  NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *digit;
	digit = *head;
	while (digit && digit->next != NULL)
		digit = digit->next;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
		new_node->next = NULL;
	if (digit)
		digit->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
