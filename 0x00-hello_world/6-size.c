#include <stdio.h>
/**
 * main - prints various size of computer types
 * Return: (0)
 */

int main(void)
{
	printf("Size of a char: %d  byte(s)\n", Sizeof(char));
	printf("size of an  int: %d byte(s)\n", Sizeof(int));
	printf("size of a long int: %d byte(s)\n", Sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", Sizeof(long long int));
	printf("size of a float: %d byte(s)\n", Sizeof(float));

return (0);
}
