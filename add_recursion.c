#include <stdio.h>
/**
 * sum_digit - adding each digit in a number
 * @n: function parameter
 * Return: sum
 */
int sum_digit(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n % 10) + sum_digit(n / 10));
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", sum_digit(798));
	return (0);
}
