#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;
	c = 1;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i != 97)
		{
			printf(",");
		}
	}
	printf("\n");
	return (0);
}
