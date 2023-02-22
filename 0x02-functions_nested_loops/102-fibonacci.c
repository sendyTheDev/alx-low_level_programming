#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: computes and print the sum of all multiples
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0;
	long int b = 1;
	long int next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(" ,");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
