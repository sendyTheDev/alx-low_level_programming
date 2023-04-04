#include "lists.h"

/**
 * free_listint - function that frees list
 *
 * @head: list that will be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ban;

	while (head)
	{
		ban = head->next;
		free(head);
		head = ban;
	}
}
