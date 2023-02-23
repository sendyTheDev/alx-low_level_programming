#include <stdio.h>
/**
 * main - prints the sum of even-valued fibonacci
 *
 * Return: 0 always
 */
int main(void)
{
	long int num1 = 1, num2 = 2, fib = 0, evenFibSum = 0;

	while (fib <= 4000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;

		if (num1 % 2 == 0)
		evenFibSum += num1;
	}
	printf("%ld\n", evenFibSum);
	return (0);
}
