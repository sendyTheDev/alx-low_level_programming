#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
