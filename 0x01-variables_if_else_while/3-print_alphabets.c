#include <stdio.h>
#include <stdlib.h>

/**
 * main - return to alphabet bot except e and q
 *
 * Return: 0
 */
int main(void)

{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
