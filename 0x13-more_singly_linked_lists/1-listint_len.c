#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 *
 * @h: pointer of a node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number_element = 0;
	const listint_t *digit = h;

	while (digit != NULL)
	{
		digit = digit->next;
		number_element++;
	}
	return (number_element);
}
