#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to be done for square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if(n < 0)
	{
		return (-1);
	}
	if (n ==0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1));
}

int sqrt_helper(int n, int helper)
{
	if(helper * helper == n)
	{
		return (helper);
	}
	if (helper *helper > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, helper + 1));
}
