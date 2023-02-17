#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all single digit number of base 10
 *
 *Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
