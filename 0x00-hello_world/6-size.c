#include <stdio.h>
/**
 * main - prints various size of computer types
 * Return: (0)
 */

int main(void)
{
	printf("Size of a char: %d  byte(s)\n", sizeof(char));
	printf("size of an  int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));

return (0);
}
