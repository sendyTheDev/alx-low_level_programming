#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list
 *
 * @head: the head of the singly linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list
 * and returns 0 if the list is empty
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
