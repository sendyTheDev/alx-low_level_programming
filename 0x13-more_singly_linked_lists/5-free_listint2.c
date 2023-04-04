#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list
 *
 * @head: head of singly linked lists
 */
void free_listint2(listint_t **head)
{
	listint_t *digit;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		digit = *head;
		*head = (*(head))->next;
		free(digit);
	}
}
