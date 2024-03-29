#include "lists.h"

/**
 * add_nodeint -  function adds new node at the beginning of a list
 *
 * @head: head of singly linked lists
 *
 * @n: elements of the singly linked lists
 *
 * Return: the address of the new element
 * return  NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
