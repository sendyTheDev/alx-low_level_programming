#include "main.h"
/**
 * set_bit - value of a bit to 1 at a given index
 * @n: pointer num change
 * @index:bit to set to 1
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 66)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
