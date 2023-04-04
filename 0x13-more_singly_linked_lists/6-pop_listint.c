#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t
 *
 * @head: singly linked lists
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *other_head;
	int n = 0;

	if (*head != NULL)
	{
		other_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = other_head;
	}
	return (n);
}
