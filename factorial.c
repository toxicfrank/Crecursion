#include <stdio.h>
/**
 * fact - factorial function
 * @n: parameter function
 * Return: always 0
 */
int fact(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * fact(n - 1));
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", fact(5));
	return (0);
}
