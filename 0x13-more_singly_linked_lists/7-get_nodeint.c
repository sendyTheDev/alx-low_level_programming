#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 *
 * @head: the head f a singly linked list
 *
 * @index: the index of the node
 *
 * Return: the nth node of a linked list
 * and n failure, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int next_node = 0;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			if (next_node == index)
				return (temp);
			temp = temp->next;
			next_node++;
		}
	}
	return (NULL);
}
