#include <stdio.h>
/**
 * fun - recursive function
 * @n: function parameter
 * Return: always 0
 */
int fun(int n)
{
	if (n == 0)
		return (1);
	else
		return (7 + fun(n - 2));
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", fun(4));
	return (0);
}
